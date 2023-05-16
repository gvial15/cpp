#include <stack>
#include <vector>
#include <iostream>

class RPN {
	public:
		RPN(std::string arg);
		~RPN();

	int	solve();

	private:
		std::string			equation;
};
