/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:12:03 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/22 12:12:03 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Generic animal";
	std::cout << "General constructor: " << this->type << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Named constructor: " << this->type << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Deconstructor: " << this->type << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "(Generic animal sound)" << std::endl;
}