#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> mstack2;
	

	mstack.push(5);
	mstack.push(17);
	mstack2 = mstack;
	std::cout << "mstack top: " << mstack.top() << std::endl;
	std::cout << "mstack2 top: " << mstack2.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
