#include "Fixed.hpp"

Fixed::Fixed() {
	fixedPointValue = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &oldFixed) {
	fixedPointValue = oldFixed.fixedPointValue;
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator= (const Fixed &og) {
	if (this == &og)
		return (*this);
	std::cout << "Copy assignment operator called\n";
	this->fixedPointValue = og.fixedPointValue;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (fixedPointValue);
}

void	Fixed::setRawBits(const int raw) {
	fixedPointValue = raw;
}
