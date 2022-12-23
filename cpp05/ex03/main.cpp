#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"  // sign: 145 execute: 137
#include "RobotomyRequestForm.hpp"    // sign: 72 execute: 45
#include "PresidentialPardonForm.hpp" // sign: 25 execute: 5
#include <exception>

int	main()
{
	Intern someRandomIntern;
	Form *r;
	Form *r1;
	Form *s1;
	Form *p1;

	// invalid form name
	r = &someRandomIntern.makeForm("robotomy request", "r");

	std::cout << std::endl;
	
	// valid form names
	r1 = &someRandomIntern.makeForm("RobotomyRequestForm", "r1");
	std::cout << "\n\n";

	s1 = &someRandomIntern.makeForm("ShrubberyCreationForm", "s1");
	std::cout << "\n\n";

	p1 = &someRandomIntern.makeForm("PresidentialPardonForm", "p1");
	std::cout << "\n\n";

	delete r1;
	delete s1;
	delete p1;
}
