#include "template.h"

int	main() {
	int		i = -1;
	int		intArr[] = {0, 1, 2, 3, 4, 0};
	char	charArr[] = "abcde";

	iter(charArr, 5, addOne);
	iter(intArr, 5, addOne);

	std::cout << charArr << std::endl;
	while (intArr[++i])
		std::cout << intArr[i];
	std::cout << "\n";
}