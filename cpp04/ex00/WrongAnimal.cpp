#include "WrongAnimal.hpp"

// constructor
WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called\n";
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &og) {}

// copy assignement operator
WrongAnimal& WrongAnimal::operator= (const WrongAnimal &og) { return (*this); }

// destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound() {
	std::cout << "**WrongAnimal sound**\n";
}
