#ifndef	EASYFIND_H
#define	EASYFIND_H

# include <vector>
# include <iostream>
# include <algorithm>

class ValueNotFound : public std::exception {
	public:
		const char *what() const throw() {
			return ("Value is not inside container");
		};
};

#endif