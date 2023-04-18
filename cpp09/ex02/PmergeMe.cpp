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
			if (!std::isdigit(argv[i][ii]) && std::atoi(&argv[i][ii]) < 0)
				std::cout << "Error: arguments must be only positive integers\n", exit(0);
		vec.push_back(atoi(argv[i]));
		deque.push_back(atoi(argv[i]));
		ii = -1;
	}
}

// destructor
PmergeMe::~PmergeMe() {}

// insert sort
template<class C>
void	PmergeMe::insert_sort(C &array, int l, int r)
{
	int						tmp;
	typename C::iterator	i;
	typename C::iterator	ii;
	typename C::iterator	prev;

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

// merge sort
template<class C>
void	PmergeMe::merge_sort(C &array, int l, int r, int m)
{
	int	tmp[r - l + 1], i, j, k;

	i = l;
	j = m + 1;
	k = 0;
	while (i <= m && j <= r)
	{
		if (array[i] <= array[j])
			tmp[k] = array[i++];
		else
			tmp[k] = array[j++];
		k++;
	}
	while (i <= m)
		tmp[k++] = array[i++];
	while (j <= r)
		tmp[k++] = array[j++];
	i = -1;
	while (++i < k)
		array[l + i] = tmp[i];
}

// merge-insert sort
template<class C>
void	PmergeMe::merge_insert_sort(C &array, int l, int r, int threshold)
{
	int	tmp[r - l + 1], m, i, j, k;

	if (l < r)
	{
		if (r - l + 1 <= threshold)
			insert_sort(array, l, r);
		else
		{
			m = l + (r - l) / 2;
			merge_insert_sort(array, l, m, threshold);
			merge_insert_sort(array, m + 1, r, threshold);
			merge_sort(array, l, r, m);
		}
	}
	insert_sort(array, l, r);
}

void	PmergeMe::sort_and_display_data()
{
	std::vector<int>::iterator vec_i;
	std::deque<int>::iterator deque_i;

	vec_i = vec.begin();
	while (vec_i != vec.end())
	{
		std::cout << *vec_i << " ";
		vec_i++;
	}

	merge_insert_sort(vec, 0, vec.size() - 1, 3);
	// merge_insert_sort(deque, 0, deque.size(), 2);

	std::cout << "\n";

	vec_i = vec.begin();
	while (vec_i != vec.end())
	{
		std::cout << *vec_i << " ";
		vec_i++;
	}

	std::cout << "\n";
}
