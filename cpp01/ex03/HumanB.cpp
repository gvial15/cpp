#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) {
	name_ = name;
}

void	HumanB::attack() {
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon) {
	weapon_ = weapon;
}