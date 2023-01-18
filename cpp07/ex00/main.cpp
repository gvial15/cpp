#include "template.h"

int	main() {
	int	x = 5;
	int	y = 6;

	int	a = 'a';
	int	b = 'b';

	std::cout << "INT\n";
	std::cout << "before swap: \n";
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	swap(x, y);
	std::cout << "after swap: \n";
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "max(x, y): ";
	std::cout << max(x, y) << std::endl;

	std::cout << "\nCHAR\n";
	std::cout << "before swap: \n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	swap(a, b);
	std::cout << "after swap: \n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min(a, b): ";
	std::cout << min(a, b) << std::endl;
}

// // PDF example:
// int main( void ) {
// int a = 2;
// int b = 3;
// swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }