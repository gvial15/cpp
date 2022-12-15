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

Fixed& Fixed::operator= (const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	this->fixedPointValue_ = other.getRawBits();
	return (*this);
}

float Fixed::operator* (const Fixed& other) {
	return (this->toFloat() * other.toFloat());
}

float Fixed::operator+ (const Fixed& other) {
	return (this->toFloat() + other.toFloat());
}

float Fixed::operator- (const Fixed& other) {
	return (this->toFloat() - other.toFloat());
}

float Fixed::operator/ (const Fixed& other) {
	return (this->toFloat() / other.toFloat());
}

bool	Fixed::operator== (const Fixed& other) {
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!= (const Fixed& other) {
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<= (const Fixed& other) {
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>= (const Fixed& other) {
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator> (const Fixed& other) {
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}
bool	Fixed::operator< (const Fixed& other) {
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::operator++ () {
	++fixedPointValue_;
	return (*this);
}

Fixed	&Fixed::operator-- () {
	--fixedPointValue_;
	return (*this);
}

Fixed	Fixed::operator++ (int) {
	Fixed	temp = *this;
	fixedPointValue_++;
	return (temp);
}

Fixed	Fixed::operator-- (int) {
	Fixed	temp = *this;
	fixedPointValue_--;
	return (temp);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

std::ostream &	operator<<(std::ostream & o, const Fixed & rhs) {
	o << rhs.toFloat();
	return (o);
}