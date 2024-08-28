/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:46:52 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/22 12:46:52 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal	*animalArr[100];
	Dog				dogTest;
	Cat				catTest;
	Dog				&dogTestRef = dogTest;
	Cat				&catTestRef = catTest;

	for (int i = 0; i < 50; i++)
		animalArr[i] = new Cat();
	for (int i = 50; i < 100; i++)
		animalArr[i] = new Dog();
	std::cout << "Finished initializing Animal array" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		delete animalArr[i];
	}
	std::cout << "### DEEP COPIES TEST ###" << std::endl;
	Dog	dogCopy(dogTestRef);
	Cat	catCopy(catTestRef);
	Dog	&dogCopyRef = dogCopy;
	Cat	&catCopyRef = catCopy;
	std::cout << "--- Comparing copies ---" << std::endl;
	dogTest.compareTo(dogCopyRef);
	catTest.compareTo(catCopyRef);
	return 0;
}