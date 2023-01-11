#include "Array.hpp"

int	main() {
	Array<int>	arr1(5);
	Array<int>	arr2;
	arr1[0] = 5;
	Array<int>	arr3(arr1);

	arr1[0] = 6;
	arr2 = arr1;

	std::cout << arr1[0] << std::endl;
	std::cout << arr2[0] << std::endl;
	std::cout << arr3[0] << std::endl;

	// shows the exception when trying to access an index out of the Array
	try {
		std::cout << arr3[6] << std::endl;
	} catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
