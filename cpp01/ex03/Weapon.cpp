#include "Weapon.hpp"

// construtors
Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
	type_ = type;
}

// destructor
Weapon::~Weapon() {};

const std::string	&Weapon::getType() {
	return (type_);
}

void	Weapon::setType(std::string type) {
	type_ = type;
}
