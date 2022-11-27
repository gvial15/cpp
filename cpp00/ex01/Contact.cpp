#include "PhoneBook.hpp"

// default constructor
Contact::Contact(void) {};

// default constructor
Contact::~Contact(void) {};

// setters
void	Contact::setFirstName(std::string firstName_) {
	firstName = firstName_;
}

void	Contact::setLastName(std::string lastName_) {
	lastName = lastName_;
}

void	Contact::setNumber(std::string number_) {
	number = number_;
}

void	Contact::setNickname(std::string nickname_) {
	nickname = nickname_;
}

void	Contact::setDarkestSecret(std::string darkestSecret_) {
	darkestSecret = darkestSecret_;
}

// getters
std::string	Contact::getFirstName() {
	return (firstName);
}

std::string	Contact::getLastName() {
	return (lastName);
}

std::string	Contact::getNumber() {
	return (number);
}

std::string	Contact::getNickname() {
	return (nickname);
}

std::string	Contact::getDarkestSecret() {
	return (darkestSecret);
}
