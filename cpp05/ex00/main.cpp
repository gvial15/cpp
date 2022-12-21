#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b4("b4", 130);
	Bureaucrat	b5(b4);
	Bureaucrat	b6;

	b6 = b5;

	std::cout << b6 << std::endl << std::endl;
	std::cout << b5 << std::endl;

	b5.incrementGrade();
	std::cout << b5 << std::endl;
	b5.decrementGrade();
	b5.decrementGrade();
	std::cout << b5 << std::endl;

	try {
		Bureaucrat b1 = Bureaucrat("b1", 0);
		std::cout << b1 << std::endl;
	} catch (Bureaucrat::GradeTooHighException &error) {
		std::cerr << error.what() << std::endl;
	}

	try {
		Bureaucrat b2 = Bureaucrat("b2", 151);
		std::cout << b2 << std::endl;
	} catch (Bureaucrat::GradeTooLowException &error) {
		std::cerr << error.what() << std::endl;
	}

	try {
		Bureaucrat b3 = Bureaucrat("b3", 150);
		std::cout << b3 << std::endl;
		b3.decrementGrade();
	} catch (Bureaucrat::GradeTooHighException &error) {
		std::cerr << error.what() << std::endl;
	}

	try {
		Bureaucrat b7 = Bureaucrat("b7", 1);
		std::cout << b7 << std::endl;
		b7.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException &error) {
		std::cerr << error.what() << std::endl;
	}
}
