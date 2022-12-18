#ifndef WRONGCat_H
#define WRONGCat_H

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &og);
		WrongCat&	operator= (const WrongCat &og);
		~WrongCat();
};

#endif