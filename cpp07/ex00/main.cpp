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
	swap(&x, &y);
	std::cout << "after swap: \n";
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "max(x, y): ";
	std::cout << max(x, y) << std::endl;

	std::cout << "\nCHAR\n";
	std::cout << "before swap: \n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	swap(&a, &b);
	std::cout << "after swap: \n";
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min(a, b): ";
	std::cout << min(a, b) << std::endl;
}