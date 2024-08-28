

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog default constructor called, with a brain" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called, brain deleted" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.getType();
	this->brain = new Brain (*(copy.getBrain()));
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(copy.getBrain()));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}

const std::string & Dog::getType() const
{
	return (this->type);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
}