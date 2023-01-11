#include "PresidentialPardonForm.hpp"

// default constructor
PresidentialPardonForm::PresidentialPardonForm() {}

// constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5), target_(target) {
	std::cout << "PresidentialPardonForm constructor have been called\n";
}

// copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &og) :
Form("RobotomyRequestForm", 25, 5), target_(og.target_) {
	std::cout << "PresidentialPardonForm copy constructor have been called\n";
}

// copy assignement operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &og) {
	if (this == &og)
		return (*this);
	this->target_ = og.target_;
	return (*this);
}

// destructor
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor have been called\n";
}

// method
void	PresidentialPardonForm::executeAction() {
	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox.\n";
}
