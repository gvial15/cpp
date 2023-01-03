#include "data.hpp"

uintptr_t	serialize(Data* ptr) {
	return ((uintptr_t)(ptr));
}

Data* deserialize(uintptr_t raw) {
	return ((Data*)(raw));
}

int	main() {

	Data	*data = new Data;
	uintptr_t	uint;

	std::cout << "original pointer: " << data << std::endl;
	std::cout << "after serialize() / deserialize(): " << deserialize(serialize(data)) << std::endl;

	delete data;
}
