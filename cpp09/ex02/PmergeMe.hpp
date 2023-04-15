#include <deque>
#include <vector>
#include <iostream>

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();

	template<class C>
	void	insert_sort(C &array, int l, int r);
	template<class C>
	void	merge_sort(C &array, int l, int r);
	template<class C>
	void	merge(C &array, int l, int m, int r);
	void	sort_and_display_data();

	private:
		std::vector<int>	vec;
		std::deque<int>		deque;
};