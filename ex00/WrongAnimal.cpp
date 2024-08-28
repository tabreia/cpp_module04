#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wrong Generic animal";
	std::cout << "General constructor: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deconstructor: " << type << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "(Wrong Generic animal sound)" << std::endl;
}