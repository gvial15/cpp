#include "WrongCat.hpp"

// constructor
WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called\n";
}

// copy constructor
WrongCat::WrongCat(const WrongCat &og) {}

// copy assignement operator
WrongCat& WrongCat::operator= (const WrongCat &og) { return (*this); }

// destructor
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}
