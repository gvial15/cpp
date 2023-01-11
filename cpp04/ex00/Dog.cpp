#include "Dog.hpp"

// constructor
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called\n";
}

// destructor
Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

// copy constructor
Dog::Dog(const Dog &og) {
	std::cout << "Dog copy constructor operator called\n";
	type_ = og.getType();
}

// copy assignement operator
Dog& Dog::operator= (const Dog &og) {
	if (this == &og)
		return (*this);
	std::cout << "Dog copy assignement operator called\n";
	Animal::operator=(og);
	return (*this);
}

void	Dog::makeSound() {
	std::cout << "woof\n";
}