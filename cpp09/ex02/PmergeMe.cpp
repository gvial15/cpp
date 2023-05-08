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

	if (l - 1 == -1)
		i = array.begin();
	else
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
void	PmergeMe::merge(C &array, int l, int m, int r)
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
	if ( l < r)
	{
		if (r - l + 1 < threshold)
			insert_sort(array, l, r);
		int	m = l + (r - l) / 2;
		merge_insert_sort(array, l, m, threshold);
		merge_insert_sort(array, m + 1, r, threshold);
		merge(array, l, m, r);
	}
}

// sort the containers and display the times etc... as required by subject
void	PmergeMe::sort_and_display_data()
{
	double vec_ms;
	double deque_ms;
	std::chrono::steady_clock::time_point t_start;
	std::chrono::steady_clock::time_point t_end;
	std::vector<int>::iterator vec_i;
	std::deque<int>::iterator deque_i;

	// *******include "data-management" time as pdf requires********


	// before
	std::cout << "Before: ";
	vec_i = vec.begin();
	while (vec_i != vec.end())
	{
		std::cout << *vec_i << " ";
		vec_i++;
	}
	std::cout << "\n";

	// sort
	t_start = std::chrono::high_resolution_clock::now();
	merge_insert_sort(vec, 0, vec.size() - 1, 3);
	t_end = std::chrono::high_resolution_clock::now();
	vec_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
	t_start = std::chrono::high_resolution_clock::now();
	merge_insert_sort(deque, 0, deque.size() - 1, 3);
	t_end = std::chrono::high_resolution_clock::now();
	deque_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();

	// after
	std::cout << "After: ";
	deque_i = deque.begin();
	while (deque_i != deque.end())
	{
		std::cout << *deque_i << " ";
		deque_i++;
	}
	// display time for each container
	std::cout << "\n";
	std::cout << "Time to process a range of " << vec.size()\
	<< " elements with std::vector<int>: " << vec_ms << "ms\n";
	std::cout << "Time to process a range of " << deque.size()\
	<< " elements with std::deque<int>: " << deque_ms << "ms\n";
}
