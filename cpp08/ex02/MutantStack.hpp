#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack<T, Container> &obj): MutantStack<T, Container>::stack(obj) {}
		MutantStack operator=(const MutantStack<T, Container> &og) {
			MutantStack<T, Container>::stack::operator=(og);
			return (*this);
		}

	typedef typename Container::deque::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};
