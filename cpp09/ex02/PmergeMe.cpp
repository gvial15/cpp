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

// insert-sort given container
template<class T>
void	PmergeMe::insert_sort(T array)
{
	
}

// merge-sort given container
template <class T>
void	PmergeMe::merge_sort(T array)
{

}

// merge-insert-sort given container
void	PmergeMe::merge_insert_sort()
{
// merge-insertion sort: on each iteration of the merge-sort do a insertion-sort on the subarrays

// divide "array" in multiple array of equal size like you would in merge sort
// then apply a insertion-sort on each new "array"
// then merge-sort the insertion-sorted arrays
}

// display before sort and after sort array with time performance for each container
void	PmergeMe::display_data()
{

}