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
		Fixed&	operator= (const Fixed& other);
	
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
