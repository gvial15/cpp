#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp" // sign: 145 execute: 137
#include "RobotomyRequestForm.hpp" // sign: 72 execute: 45
#include "PresidentialPardonForm.hpp" // sign: 25 execute: 5
#include <exception>

int	main()
{
	// try to execute form but its not signed
	try {
		Bureaucrat b1("b1", 120);
		ShrubberyCreationForm s1("s1");
		s1.execute(b1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	// try to sign from but bureaucrat grade is too low
	try {
		Bureaucrat b2("b2", 120);
		RobotomyRequestForm r1("r1");
		r1.beSigned(b2);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	// try to execute from but bureaucrat grade is too low
	try {
		Bureaucrat b3("b3", 10);
		PresidentialPardonForm p1("p1");
		p1.beSigned(b3);
		p1.execute(b3);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	// try if grades are good to sign and execute
	try {
		Bureaucrat b4("b4", 1);
		PresidentialPardonForm p2("p2");
		p2.beSigned(b4);
		p2.execute(b4);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
