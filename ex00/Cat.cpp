

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{

}

Cat::~Cat()
{

}

Cat::Cat(const Cat &copy) : Animal(copy)
{

}

Cat &Cat::operator=(const Cat &copy)
{
	this->Animal::operator=(copy);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" <<std::endl;
}