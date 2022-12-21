#include "Bureaucrat.hpp"
#include <string>

// constructor
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name_(name) {
	std::cout << "Bureaucrat constructor have been called\n";
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

// copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& og) :
name_(og.getName()), grade_(og.getGrade()) {
	std::cout << "Bureaucrat copy constructor have been called\n";
}

// copy assignement operator
Bureaucrat Bureaucrat::operator=(const Bureaucrat &og) {
	this->grade_ = og.getGrade();
	return (*this);
}

// destructor
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor have been called\n";
}

// methods
void	Bureaucrat::incrementGrade() {
	if (grade_ < 2)
		throw GradeTooHighException();
	grade_--;
}

void	Bureaucrat::decrementGrade() {
	if (grade_ > 149)
		throw GradeTooHighException();
	grade_++;
}

// getters
std::string	Bureaucrat::getName() const{
	return (name_);
}

int	Bureaucrat::getGrade() const {
	return (grade_);
}

// exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}


// overload
std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
