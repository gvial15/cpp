#include "Span.hpp"

int	main() {
	Span span(5);
	Span span2(5);

	span.addNumber(5);
	span.addNumber(6);
	span.addNumber(8);
	span.addNumber(9);
	span.addNumber(10);
	// span is full ! (x2) 👇
	span.addNumber(11);
	span.addNumber(12);

	// span2.addNumber(6); // makes span2 unable to take the addNumbers(), is able without it
	span2.addNumbers(span.vector().begin(), span.vector().end());
	std::cout << "span2 size: " << span2.vector().size() << std::endl;
}
