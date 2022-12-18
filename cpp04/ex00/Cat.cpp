#include "Cat.hpp"

// constructor
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat construcor have been called\n";
}

// copy constructor
Cat::Cat(const Cat &og) {
	std::cout << "Cat copy construcor have been called\n";
	type_ = og.getType();
}

// destructor
Cat::~Cat() {
	std::cout << "Cat destructor have been called\n";
}

// copy assignement operator
Cat& Cat::operator= (const Cat &og) {
	std::cout << "Cat copy assignement operator called\n";
	Animal::operator=(og);
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "meoww\n";
}
