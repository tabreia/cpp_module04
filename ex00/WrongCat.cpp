#include "WrongCat.hpp"
WrongCat::WrongCat()
{
	type = "Wrong Cat";
	std::cout << "Constructor: " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{

}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor: " << type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}