/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:12:03 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/22 12:48:46 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
		std::string	type;
		Brain		*brain;

	public:
		Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &copy);
		~Dog();

		void				makeSound() const;
		const std::string	&getType() const;
		Brain				*getBrain(void) const;
		void				compareTo(Dog const &other) const;

};

#endif