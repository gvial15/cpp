#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

// default constructor
Form::Form() {}

// constructor
Form::Form(std::string name, unsigned int sign, unsigned int execute) :
name_(name), isSigned_(false) {
	std::cout << "Form constructor have been called\n";
	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw GradeTooLowException();
	sign_ = sign;
	execute_ = execute;
}

// copy constructor
Form::Form(const Form &og) :
sign_(og.getSign()), execute_(og.getExecute()), isSigned_(og.getIsSigned()) {
	std::cout << "Form copy constructor have been called\n";
}

// copy assignement operator
Form& Form::operator=(const Form &og) {
	if (this == &og)
		return (*this);
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

// methods
void	Form::beSigned(const Bureaucrat &bureaucrat) {
	std::cout << bureaucrat.getName() << " tries to sign " << name_ << std::endl;
	if (bureaucrat.getGrade() > sign_)
		bureaucrat.signForm(name_, 0);
	else {
		bureaucrat.signForm(name_, 1);
		isSigned_ = 1;
	}
}

void	Form::execute(Bureaucrat const & executor) {
	if (isSigned_ == 0)
	{
		std::cout << executor.getName() << " couldn't execute because form is not signed" << std::endl;
		throw FormNotSignedException();
	}
	if (executor.grade_ > execute_)
	{
		std::cout << executor.getName() << " couldn't execute because his grade is to low" << std::endl;
		throw GradeTooLowException();
	}
	else
	{
		executor.executeForm(*this);
		executeAction();
	}
}

// exception
const char* Form::GradeTooHighException::what() const throw() {
	return ("Form grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Form grade too low");
}

const char* Form::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

// getters
const std::string	Form::getName() const {
	return (name_);
}

unsigned int	Form::getSign() const {
	return (sign_);
}

unsigned int	Form::getExecute() const {
	return (execute_);
}

unsigned int	Form::getIsSigned() const {
	return (isSigned_);
}

// overload
std::ostream& operator<<(std::ostream &out, const Form &obj) {
	out << "Form name:                " << obj.getName() << std::endl;
	out << "Is signed:                " << obj.getIsSigned() << std::endl;
	out << "lvl required to sign:     " << obj.getSign() << std::endl;
	out << "lvl required to execute:  " << obj.getExecute() << std::endl;
	return (out);
}
