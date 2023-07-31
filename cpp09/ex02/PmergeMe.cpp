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

// merge-insert sort
template<class C>
void	PmergeMe::merge_insert_sort(C &array)
{
	
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
	merge_insert_sort(vec);
	t_end = std::chrono::high_resolution_clock::now();
	vec_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
	t_start = std::chrono::high_resolution_clock::now();
	merge_insert_sort(deque);
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
