#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &oldFixed);
		Fixed& operator= (const Fixed& other);
		~Fixed();
	
	int	getRawBits(void) const;
	void		setRawBits(int const raw);

	private:
		int					fixedPointValue;
		static const int	nFractsBits = 8;
};

#endif