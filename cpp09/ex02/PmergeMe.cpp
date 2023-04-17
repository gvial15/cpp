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

	i = array.begin() + l - 1;
	prev = i;
	while (i != array.begin() + r)
	{
		if (i != array.begin() && *i < *prev)
		{
			ii = i;
			while (ii != array.begin() + l - 1 && *i < *--ii);
			tmp = *i;
			array.erase(i);
			array.insert(++ii, tmp);
		}
		prev = i;
		i++;
	}
}

template<class C>
void	PmergeMe::merge_insert_sort(C &array, int l, int r, int threshold)
{
	if (l < r)
	{

	}
}

void	PmergeMe::sort_and_display_data()
{
	std::vector<int>::iterator vec_i;
	std::deque<int>::iterator deque_i;

	// merge_sort<std::vector<int> >(vec, 0, vec.size() - 1);
	// merge_sort<std::deque<int> >(deque, 0, deque.size() - 1);








	// print vec
	vec_i = vec.begin();
	while (vec_i != vec.end())
	{
		std::cout << *vec_i << " ";
		vec_i++;
	}

	insert_sort(vec, 8, 11);

	std::cout << "\n";

	vec_i = vec.begin();
	while (vec_i != vec.end())
	{
		std::cout << *vec_i << " ";
		vec_i++;
	}

	std::cout << "\n";
}
