#include <deque>
#include <vector>
#include <iostream>

class PmergeMe {
	public:
		PmergeMe(char **argv);
		~PmergeMe();

	private:
		std::vector<int>	vec;
		std::deque<int>		deque;
};