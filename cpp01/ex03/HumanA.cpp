#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::~HumanA() {};

HumanA::HumanA(std::string name, Weapon &weapon) : weapon_(weapon) {
	name_ = name;
}

void	HumanA::attack() {
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}
