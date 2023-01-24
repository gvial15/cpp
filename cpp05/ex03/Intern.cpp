#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

// default constructor
Intern::Intern() {
	std::cout << "Intern default constructor have been called\n";
}

// copy constructor
Intern::Intern(const Intern& og) {
	std::cout << "Intern copy constructor have been called\n";
}

// copy assignement operator
Intern& Intern::operator=(const Intern &og) {
	if (this == &og)
		return (*this);
	std::cout << "Intern copy assignement operator have been called\n";
	return (*this);
}

// destructor
Intern::~Intern() {
	std::cout << "Intern destructor have been called\n";
}

// method
Form&	Intern::makeForm(std::string name, std::string target) {
	Form *form;
	if (!name.compare("PresidentialPardonForm"))
		form = new PresidentialPardonForm(target);
	if (!name.compare("RobotomyRequestForm"))
		form = new RobotomyRequestForm(target);
	if (!name.compare("ShrubberyCreationForm"))
		form = new ShrubberyCreationForm(target);
	else
	 	std::cout << "This type of form doesn't exist\n";
	if (!name.compare("ShrubberyCreationForm") || !name.compare("RobotomyRequestForm")
		|| !name.compare("PresidentialPardonForm"))
		std::cout << "Intern creates " << name << std::endl;
	return (*form);
}
