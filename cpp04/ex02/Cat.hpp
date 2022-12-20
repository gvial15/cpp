#ifndef CAT_H
#define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &og);
		Cat& operator= (const Cat &og);
		~Cat();

		void	makeSound();
		void abstract();

	private:
		Brain	*brain;
};

#endif