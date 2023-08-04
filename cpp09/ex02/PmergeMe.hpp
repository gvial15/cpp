#include <deque>
#include <vector>
#include <iostream>

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();

	template<typename it>
	void	insert_sort(it start, it end);
	template<typename it>
	void	merge_insert_sort(it begin, it end);
	void	sort_and_display_data();

	private:
		std::vector<int>	vec;
		std::deque<int>		deque;
};