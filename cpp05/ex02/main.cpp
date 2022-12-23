#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int	main()
{
	// try to execute form but its not signed
	try {
		Bureaucrat b1("b1", 120);
		ShrubberyCreationForm s1("S1");
		s1.execute(b1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	// try to execute from but bureaucrat grade is too low

}
