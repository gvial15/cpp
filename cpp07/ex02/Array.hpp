#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>

template <class C>
class Array {
	public:
		Array() : arr_(new C[0]), size_(0) {}
		Array(unsigned int n) : arr_(new C[n]), size_(n) {}
		Array(const Array &og) : arr_(new C[og.size()]), size_(og.size()) {
			for (int i = 0; i < og.size(); ++i)
				arr_[i] = og.arr_[i];
		}
		Array<C>&	operator=(const Array<C> &og) {
			if (this == &og)
				return (*this);
			size_ = og.size_;
			for (int i = 0; i < og.size(); ++i)
				arr_[i] = og.arr_[i];
			return (*this);
		}
		~Array() { delete[] this->arr_; }

	C	&operator[](int index) {
		if (index >= size_ || index < 0)
			throw Array::IndexNotInArray();
		return arr_[index];
	}

	class IndexNotInArray : public std::exception {
		public:
			const char *what() const throw() {
				return ("index is not inside the array");
			};
	};

	unsigned int	size() const { return (size_); }

	private:
		C				*arr_;
		unsigned int	size_;
};

#endif