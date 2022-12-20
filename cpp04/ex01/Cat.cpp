#include "Cat.hpp"

// constructor
Cat::Cat() : Animal("Cat"), brain(new Brain) {
	std::cout << "Cat construcor have been called\n";
}

// copy constructor
Cat::Cat(const Cat &og) : Animal("Cat"), brain(new Brain(*og.brain)) {
	std::cout << "Cat copy constructor have been called\n";
}

// destructor
Cat::~Cat() {
	std::cout << "Cat destructor have been called\n";
	delete brain;
}

// copy assignement operator
Cat& Cat::operator= (const Cat &og) {
	std::cout << "Cat copy assignement operator called\n";
	Animal::operator=(og);
	this->brain = new Brain;
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "meoww\n";
}
