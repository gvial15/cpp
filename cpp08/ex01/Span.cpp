#include "Span.hpp"
#include <algorithm>
#include <exception>
#include <iterator>
#include <vector>

Span::Span() {};

Span::Span(unsigned int n) : n_(n) {}

Span::Span(const Span &og) : n_(og.n_), vec_(og.vec_) {}

Span& Span::operator=(const Span &og) {
	if (this == &og)
		return (*this);
	n_ = og.n_;
	vec_ = og.vec_;
	return (*this);
}

Span::~Span() {};

std::vector<int>&	Span::vector() { return (vec_); }

void	Span::addNumber(int n) {
	try {
		if (vec_.size() < n_)
			vec_.push_back(n);
		else
			throw Span::SpanIsFull();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	try {
		if (std::distance(start, end) <= n_ - vec_.size())
			vec_.insert(vec_.end(), start, end);
		else
			throw Span::SpanIsFull();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int	Span::longestSpan() {
	int	span = 0;
	int	longestSpan;
	std::vector<int> sortedVec = vec_;

	if (vec_.size() < 2)
		std::cout << "Size is less than 2\n";
	sort(sortedVec.begin(), sortedVec.end());
	return (*(std::max_element(sortedVec.begin(), sortedVec.end())) - *(sortedVec.begin()));
}
