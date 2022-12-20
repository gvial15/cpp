#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &og);
		Brain& operator=(const Brain &og);
		~Brain();
		std::string	ideas[100];
};

#endif