#include "Brain.hpp"

// constructor
Brain::Brain() {
	std::cout << "Brain constructor have been called\n";
}

// destructor
Brain::~Brain() {
	std::cout << "Brain destructor have been called\n";
}

// copy constructor
Brain::Brain(const Brain &og) {
	std::cout << "Brain copy constructor have been called\n";
}

// copy assignement operator
Brain& Brain::operator=(const Brain &og) {
	std::cout << "Brain copy assignement operator have been called\n";
	return (*this);
}