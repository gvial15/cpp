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
		Fixed& operator= (const Fixed& other);
		~Fixed();
	
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
