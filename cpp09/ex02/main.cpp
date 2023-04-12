#include "PmergeMe.hpp"
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc < 3)
		std::cout << "Error: argument error\n", exit(0);
	PmergeMe	PmergeMe(argv);
	PmergeMe.merge_insert_sort();
	PmergeMe.display_data();
	// display before->after and the time it took for each container to be sorted
}