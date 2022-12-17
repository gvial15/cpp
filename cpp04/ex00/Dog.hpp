#ifndef DOG_H
#define DOG_H

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &og);
		Dog& operator= (const Dog &og);
		~Dog();

		void	makeSound();
};

#endif