#ifndef TEMPLATE_H
#define TEMPLATE_H

# include <iostream>

template <typename T> void	swap(T *x, T *y) {
	T	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

template <typename T> void	swap(T &x, T &y) {
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T min(T x, T y) {
	if (y <= x)
		return (y);
	return (x);
}

template <typename T> T max(T x, T y) {
	if (y >= x)
		return (y);
	return (x);
}

#endif