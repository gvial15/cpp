#include "PmergeMe.hpp"
#include <algorithm>
#include <vector>

int	main(int argc, char **argv)
{
	if (argc < 3)
		std::cout << "Error: argument error\n", exit(0);
	PmergeMe	PmergeMe(argv);
	PmergeMe.sort_and_display_data();
}