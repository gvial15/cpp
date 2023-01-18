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

	std::cout << "\n";

	// From execute grade to low
	try {
		Form form1("form1", 120, 151);
		std::cout << form1;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n";

	// test beSigned and signForm
	try {
		Bureaucrat b1 = Bureaucrat("b1", 100);
		std::cout << b1;
		std::cout << "\n";
		Form form1("form1", 100, 120);
		std::cout << form1;
		std::cout << "\n";
		form1.beSigned(b1);
		std::cout << "\n";
		std::cout << form1;
		std::cout << "\n";
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
