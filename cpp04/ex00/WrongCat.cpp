#include "WrongCat.hpp"

// constructor
WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(std::string type) {
}

// copy constructor
WrongCat::WrongCat(const WrongCat &og) {}

// copy assignement operator
WrongCat& WrongCat::operator= (const WrongCat &og) { return (*this); }

// destructor
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}
