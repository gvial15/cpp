#include <deque>
#include <vector>
#include <iostream>

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();

	template<class T>
	void	insert_sort(T &array);
	void	display_data();

	private:
		std::vector<int>	vec;
		std::deque<int>		deque;
};