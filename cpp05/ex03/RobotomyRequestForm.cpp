#include "RobotomyRequestForm.hpp"

// default constructor
RobotomyRequestForm::RobotomyRequestForm() {}

// constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 72, 45), target_(target) {
	std::cout << "RobotomyRequestForm constructor have been called\n";
}

// copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &og) :
Form("RobotomyRequestForm", 72, 45), target_(og.target_) {
	std::cout << "RobotomyRequestForm copy constructor have been called\n";
}

// copy assignement operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &og) {
	if (this == &og)
		return (*this);
	this->target_ = og.target_;
	return (*this);
}

// destructor
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor have been called\n";
}

// method
void	RobotomyRequestForm::executeAction(){
	srand(time(0));

	if (rand() % 2) {
		std::cout << target_ << " has been robotomized\n";
	} else {
		std::cout << "The robotomy failed\n";
	}
}
