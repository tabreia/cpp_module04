

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{

}

Dog::~Dog()
{

}

Dog::Dog(const Dog &copy) : Animal(copy)
{

}

Dog &Dog::operator=(const Dog &copy)
{
	this->Animal::operator=(copy);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
}