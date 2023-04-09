#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: wrong number of argument\n", exit(1);
	RPN	equation(argv[1]);
	std::cout << equation.solve() << "\n";
}