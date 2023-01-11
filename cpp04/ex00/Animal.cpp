#include "Animal.hpp"

// constructor

Animal::Animal() {}

Animal::Animal(std::string type) {
	std::cout << "Animal constructor called\n";
	type_ = type;
}

// copy constructor
Animal::Animal(const Animal &og) {
	type_ = og.getType();
}

// copy assignement operator
Animal& Animal::operator= (const Animal& og) {
	if (this == &og)
		return (*this);
	this->type_ = og.getType();
	return (*this);
}

// destructor
Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

// getter
std::string	Animal::getType() const {
	return (type_);
}
