#ifndef TEMPLATE_H
#define TEMPLATE_H

# include <iostream>

template <typename T> void	addOne(T &x) {
	x++;
}

template <typename T> void	iter(T *arr, int len, void (*f)(T&)) {
	while (--len >= 0)
		f(arr[len]);
}

#endif