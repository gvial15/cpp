#include "easyfind.h"

template <class T>
typename T::iterator	easyfind(T container, int value) {
    typename T::iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	else
	 	throw ValueNotFound();
}

int	main() {
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(25);
	vec.push_back(42);
	vec.push_back('a');
	vec.push_back('b');

	try {
    	std::vector<int>::iterator it;
		it = easyfind(vec, 43);
		std::cout << *it << std::endl;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
