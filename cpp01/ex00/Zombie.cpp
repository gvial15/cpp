#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	name_ = name;
}

Zombie::~Zombie(void) {
	std::cout << "Destroyed zombie " << name_ << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name_ << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}

void randomChump( std::string name ) {
	Zombie	newZombie = Zombie(name);

	newZombie.announce();
}
