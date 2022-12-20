#include "Dog.hpp"

// constructor
Dog::Dog() : Animal("Dog"), brain(new Brain) {
	std::cout << "Dog constructor called\n";
}

// copy constructor
Dog::Dog(const Dog &og) : Animal("Dog"), brain(new Brain(*og.brain)) {
	std::cout << "Dog copy constructor operator called\n";
}

// destructor
Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete brain;
}

// copy assignement operator
Dog& Dog::operator= (const Dog &og) {
	std::cout << "Dog copy assignement operator called\n";
	Animal::operator=(og);
	this->brain = new Brain;
	return (*this);
}

void	Dog::makeSound() {
	std::cout << "woof\n";
}
