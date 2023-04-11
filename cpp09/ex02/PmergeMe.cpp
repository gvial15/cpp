#include "PmergeMe.hpp"

// constructor
PmergeMe::PmergeMe(char **argv)
{
	int	i;
	int	ii;

	i = 0;
	ii = -1;
	while (argv[++i])
	{
		while (argv[i][++ii])
			if (!std::isdigit(argv[i][ii]))
				std::cout << "Error: arguments must only be int\n", exit(0);
		vec.push_back(atoi(argv[i]));
		deque.push_back(atoi(argv[i]));
		ii = -1;
	}
}

// destructor
PmergeMe::~PmergeMe() {}