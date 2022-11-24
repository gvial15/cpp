#include "PhoneBook.hpp"

// default constructor
Contact::Contact(void) {};

// default constructor
Contact::~Contact(void) {};

// setters
void	Contact::setFirstName(std::string firstName_) {
	firstName = firstName_;
};

void	Contact::setLastName(std::string lastName_) {
	lastName = lastName_;
};

void	Contact::setNumber(std::string number_) {
	number = number_;
};

// getters
