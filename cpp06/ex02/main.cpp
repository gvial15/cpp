#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	Base	*base;
	int		random_n;

	srand(time(NULL));
	random_n = rand() % 3 + 1;
	if (random_n == 1)
		base = new A;
	if (random_n == 2)
		base = new B;
	if (random_n == 3)
		base = new C;
	return (base);
}

void identify(Base* p) {
	if (typeid(*p) == typeid(A))
		std::cout << "Type is A\n";
	if (typeid(*p) == typeid(B))
		std::cout << "Type is B\n";
	if (typeid(*p) == typeid(C))
		std::cout << "Type is C\n";	
}

void identify(Base& p) {
	if (typeid(p) == typeid(A))
		std::cout << "Type is A\n";
	if (typeid(p) == typeid(B))
		std::cout << "Type is B\n";
	if (typeid(p) == typeid(C))
		std::cout << "Type is C\n";	
}


int	main() {
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;
}