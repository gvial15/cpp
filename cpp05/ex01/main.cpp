#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	// From sign grade to high
	try {
		Form form1("form1", 0, 148);
		std::cout << form1;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	// From execute grade to low
	try {
		Form form1("form1", 120, 151);
		std::cout << form1;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	// test beSigned and signForm
	try {
		Bureaucrat b1 = Bureaucrat("b1", 100);
		std::cout << b1;
		Form form1("form1", 100, 120);
		std::cout << form1;
		form1.beSigned(b1);
		std::cout << form1;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
