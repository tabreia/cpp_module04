#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
		std::string	*ideas;
	public:
		Brain();
		Brain(Brain &copy);
		~Brain();
		Brain &operator=(Brain const &copy);

		std::string *getIdeas();
};


#endif