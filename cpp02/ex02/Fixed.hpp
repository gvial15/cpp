#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &oldFixed);
		~Fixed();

		bool	operator== (const Fixed& other);
		bool	operator!= (const Fixed& other);
		bool	operator<= (const Fixed& other);
		bool	operator>= (const Fixed& other);
		bool	operator< (const Fixed& other);
		bool	operator> (const Fixed& other);
		float	operator+ (const Fixed& other);
		float	operator- (const Fixed& other);
		float	operator* (const Fixed& other);
		float	operator/ (const Fixed& other);
		Fixed&	operator++ ();
		Fixed&	operator-- ();
		Fixed	operator++ (int);
		Fixed	operator-- (int);
		Fixed&	operator= (const Fixed& other);
	

	static Fixed&		min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&		max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private:
		int					fixedPointValue_;
		static const int	nFractsBits_;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
