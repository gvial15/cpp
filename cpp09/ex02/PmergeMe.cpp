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

template<class C>
void	PmergeMe::insert_sort(C &array, int l, int r)
{
	int							tmp;
	std::vector<int>::iterator	i;
	std::vector<int>::iterator	ii;
	std::vector<int>::iterator	prev;

	i = array.begin() + l;
	while (i != array.begin() + r)
	{
		//                       (segault here)
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

template<class C>
void	PmergeMe::merge(C &array, int l, int m, int r)
{
	// use insertion sort here
}

template<class C>
void	PmergeMe::merge_sort(C &array, int l, int r)
{
	int	m;

	if (l<r)
	{
		m = (l + r) / 2;
		merge_sort<C>(array, l, m);
		merge_sort<C>(array, m + 1, r);
		merge<C>(array, l, m , r);
	}
}

void	PmergeMe::sort_and_display_data()
{
	std::vector<int>::iterator	i;

	// merge_sort<std::vector<int> >(vec, 0, vec.size() - 1);
	// merge_sort<std::deque<int> >(deque, 0, deque.size() - 1);

	i = vec.begin();
	while (i != vec.end())
	{
		std::cout << *i << " ";
		i++;
	}
	std::cout << "\n";	

	// if second argument is not 0 segfault
	insert_sort(vec, 0, 11);

	i = vec.begin();
	while (i != vec.end())
	{
		std::cout << *i << " ";
		i++;
	}
	std::cout << "\n";	
}