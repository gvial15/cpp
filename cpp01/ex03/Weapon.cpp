#include "Weapon.hpp"
#include <string>

// construtor
Weapon::Weapon(std::string type) {
	type_ = type;
}

// destructor
Weapon::~Weapon() {
	std::cout << "Weapon" << type_ << "have been destroyed" << std::endl;
};

const std::string	&Weapon::getType() {
	return (type_);
}

void	Weapon::setType(std::string type) {
	type_ = type;
}
