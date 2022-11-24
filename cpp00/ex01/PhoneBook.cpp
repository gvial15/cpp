#include "PhoneBook.hpp"

// default constructor
PhoneBook::PhoneBook(void) {
	ncontact = 0;
};

// default destructor
PhoneBook::~PhoneBook(void) {};

// setters
void	PhoneBook::set_ncontact(int n) {
		ncontact = n;
};

// getters
int	PhoneBook::get_ncontact() {
	return (ncontact);
};
