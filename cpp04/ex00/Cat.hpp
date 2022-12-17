#ifndef CAT_H
#define CAT_H

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &og);
		Cat& operator= (const Cat &og);
		~Cat();

		void	makeSound();
};

#endif