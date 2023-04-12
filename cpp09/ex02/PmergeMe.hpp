#include <deque>
#include <vector>
#include <iostream>

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();

	template<class T>
	void	merge_sort(T array);
	template<class T>
	void	insert_sort(T array);
	void	merge_insert_sort();
	void	display_data();

	private:
		std::vector<int>	vec;
		std::deque<int>		deque;
};