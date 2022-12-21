#include "Form.hpp"

// default constructor
Form::Form() {}

// constructor
Form::Form(std::string name, unsigned int sign, unsigned int execute) :
name_(name), isSigned_(false), sign_(sign), execute_(execute) {
	std::cout << "Form constructor have been called\n";
}

// copy constructor
Form::Form(const Form &og) :
sign_(og.getSign()), execute_(og.getExecute()), isSigned_(og.getIsSigned()) {
	std::cout << "Form copy constructor have been called\n";
}

// copy assignement operator
Form& Form::operator=(const Form &og) {
	std::cout << "Form copy assignement operator have been called\n";
	this->execute_ = og.getExecute();
	this->isSigned_ = og.getIsSigned();
	this->sign_ = og.getSign();
	return (*this);
}

// destructor
Form::~Form() {
	std::cout << "Form destructor have been called\n";
}

// getters
unsigned int	Form::getSign() const {
	return (sign_);
}

unsigned int	Form::getExecute() const {
	return (execute_);
}

unsigned int	Form::getIsSigned() const {
	return (isSigned_);
}

// setters
