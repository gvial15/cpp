#include "Fixed.hpp"

const int	Fixed::nFractsBits_ = 8;

Fixed::Fixed() : fixedPointValue_(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) : fixedPointValue_(n << nFractsBits_) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n) : fixedPointValue_(n * pow(2, nFractsBits_)) {
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &oldFixed) : fixedPointValue_(oldFixed.fixedPointValue_){
	std::cout << "Copy constructor called\n";
}

int	Fixed::getRawBits(void) const {
	return (fixedPointValue_);
}

void	Fixed::setRawBits(const int raw) {
	fixedPointValue_ = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)fixedPointValue_ / (float)(1 << nFractsBits_));
}

int	Fixed::toInt(void) const {
	return ((fixedPointValue_ ^ nFractsBits_) >> nFractsBits_);
}

Fixed& Fixed::operator= (const Fixed &fixed) {
	std::cout << "Copy assignment operator called\n";
	this->fixedPointValue_ = fixed.getRawBits();
	return (*this);
}

float Fixed::operator* (const Fixed& other) {
	return (this->toFloat() * other.toFloat());
}

std::ostream &	operator<<(std::ostream & o, const Fixed & rhs) {
	o << rhs.toFloat();
	return (o);
}
