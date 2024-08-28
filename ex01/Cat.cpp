/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:42:46 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/22 12:42:46 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat default constructor called, with a brain" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called, brain deleted" << std::endl;
}

Cat::Cat(Cat &copy)
{
	this->type = copy.getType();
	this->brain = new Brain (*(copy.getBrain()));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(copy.getBrain()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" <<std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}

const std::string & Cat::getType() const
{
	return (this->type);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
}
