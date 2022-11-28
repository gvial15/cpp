#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
	std::cout << "Destroyed zombie " << name_ << std::endl;
}

void	Zombie::setName(std::string name) {
	name_ = name;
}

void	Zombie::announce(void) {
	std::cout << name_ << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
