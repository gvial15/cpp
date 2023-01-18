#ifndef SPAN_H
#define SPAN_H

#include <exception>
# include <iostream>
# include <vector>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &og);
		Span& operator=(const Span &og);
		~Span();

	void	addNumber(int n);
	void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int		longestSpan();
	int		shortestSpan();
	std::vector<int>&	vector();

	class SpanIsFull : public std::exception {
		public:
			const char* what() const throw() {
				return ("Span is full !");
			}
	};

	private:
		std::vector<int> vec_;
		unsigned int	n_;
};

#endif