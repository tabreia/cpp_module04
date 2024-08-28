#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	std::string type;
	Brain		*brain;
	public:
		Cat();
		Cat(Cat &copy);
		Cat &operator=(Cat const &copy);
		~Cat();

		void				makeSound() const;
		const std::string	&getType() const;
		Brain 				*getBrain(void) const;
		void				compareTo(Cat const &other) const;
};

#endif