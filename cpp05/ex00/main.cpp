#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b4("b4", 130);
	Bureaucrat	b5(b4);
	Bureaucrat	b6;

	b6 = b5;

	std::cout << b5 << std::endl;
	std::cout << b6 << std::endl;

	try {
		Bureaucrat b1 = Bureaucrat("b1", 0);
		std::cout << b1 << std::endl;
	} catch (Bureaucrat::GradeTooHighException &error) {
		std::cerr << error.what() << std::endl;
	}

	try {
		Bureaucrat b2 = Bureaucrat("b2", 200);
		std::cout << b2 << std::endl;
	} catch (Bureaucrat::GradeTooLowException &error) {
		std::cerr << error.what() << std::endl;
	}

	try {
		Bureaucrat b3 = Bureaucrat("b3", 1);
		std::cout << b3 << std::endl;
		b3.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException &error) {
		std::cerr << error.what() << std::endl;
	}
}