#include "PmergeMe.hpp"
#include <string>
#include <vector>

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
			if (!std::isdigit(argv[i][ii]) && std::atoi(&argv[i][ii]) < 0)
				std::cout << "Error: arguments must be only positive integers\n", exit(0);
		vec.push_back(atoi(argv[i]));
		deque.push_back(atoi(argv[i]));
		ii = -1;
	}
}

// destructor
PmergeMe::~PmergeMe() {}

// insert-sort array
template<class T>
void	PmergeMe::insert_sort(T &array)
{
	int							tmp;
	std::vector<int>::iterator	i;
	std::vector<int>::iterator	ii;
	std::vector<int>::iterator	prev;

	i = array.begin();
	while (i != array.end())
	{
		if (i != array.begin() && *i < *prev)
		{
			ii = i;
			while (ii != array.begin() && *i < *--ii);
			tmp = *i;
			array.erase(i);
			array.insert(++ii, tmp);
		}
		prev = i;
		i++;
	}
}

// display before sort and after sort array with time performance for each container
void	PmergeMe::display_data()
{
	
}