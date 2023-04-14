#include "PmergeMe.hpp"
#include <algorithm>
#include <vector>

int	main(int argc, char **argv)
{
	if (argc < 3)
		std::cout << "Error: argument error\n", exit(0);
	PmergeMe	PmergeMe(argv);
	PmergeMe.display_data();
	// display before->after and the time it took for each container to be sorted
}