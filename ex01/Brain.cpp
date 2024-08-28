

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = "Brilliant Idea!!";
	}
	std::cout << "Brain constructor called and filled with ideas" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::string *copyIdeas = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = copyIdeas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}