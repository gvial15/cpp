#include "Fixed.hpp"
#include <algorithm>
#include <ostream>

int	main()
{
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	Fixed c(4.44f);
	Fixed d(c);
	Fixed e(3.45f);

	std::cout << "\npost/pre-increment and post/pre-decrement operator:\n";
	std::cout << "a= " << a << std::endl;
	// std::cout << ++a << std::endl;
	std::cout << "a= " << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << "a= " << a << std::endl << std::endl;

	std::cout << "operator * :\n";
	std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\noperator == :\n";
	std::cout << "4.44f == 4.44f: " << (c == d) << std::endl;
	std::cout << "4.44f == 3.45f: " << (c == e) << std::endl << std::endl;

	std::cout << "\noperator != :\n";
	std::cout << "4.44f != 4.44f: " << (c != d) << std::endl;
	std::cout << "4.44f != 3.45f: " << (c != e) << std::endl << std::endl;

	std::cout << "\noperator <= :\n";
	std::cout << "4.44f <= 3.45f: " << (c <= e) << std::endl;
	std::cout << "3.45f <= 4.44f: " << (e <= c) << std::endl << std::endl;

	std::cout << "\noperator >= :\n";
	std::cout << "4.44f >= 3.45: " << (c >= e) << std::endl;
	std::cout << "3.45f >= 4.44f: " << (e >= c) << std::endl << std::endl;

	std::cout << "\noperator > :\n";
	std::cout << "4.44f > 3.45: " << (c > e) << std::endl;
	std::cout << "3.45f > 4.44f: " << (e > c) << std::endl << std::endl;

	std::cout << "\noperator < :\n";
	std::cout << "4.44f < 3.45: " << (c < e) << std::endl;
	std::cout << "3.45f < 4.44f: " << (e < c) << std::endl << std::endl;

	std::cout << "\noperator + :\n";
	std::cout << "3.45f + 4.44f: " << (e + c) << std::endl << std::endl;

	std::cout << "\noperator - :\n";
	std::cout << "3.45f - 4.44f: " << (e - c) << std::endl << std::endl;

	std::cout << "\noperator * :\n";
	std::cout << "3.45f * 4.44f: " << (e * c) << std::endl << std::endl;

	std::cout << "\noperator / :\n";
	std::cout << "3.45f / 4.44f: " << (e / c) << std::endl << std::endl;

	std::cout << "min:\n";
	std::cout << Fixed::min(c, e) << std::endl << std::endl;

	std::cout << "max:\n";
	std::cout << Fixed::max(c, e) << std::endl << std::endl;

	std::cout << "pre-increment and pre-decrement operator:\n" << std::endl;
	std::cout << "e   = " << e << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "--e = " << --e << std::endl << std::endl;

	std::cout << "post-increment and post-decrement operator:\n" << std::endl;
	std::cout << "e   = " << e << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e-- = " << e-- << std::endl << std::endl;


	return (0);
}
