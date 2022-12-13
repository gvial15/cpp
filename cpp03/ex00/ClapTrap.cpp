#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(std::string name) : 
name_(name), health_(10), energy_(10), damage_(0) {
	std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called\n";
}

std::string	ClapTrap::getName() {
	return (name_);
}

int	ClapTrap::getHealth() {
	return (health_);
}

int	ClapTrap::getDamage() {
	return (damage_);
}

int	ClapTrap::getEnergy() {
	return (energy_);
}

void 	ClapTrap::attack(const std::string& target) {
	if (energy_ > 0 && health_ > 0)
	{
		std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing 1 points of damage!\n";
		--energy_;
	}
	else
		std::cout << "Not enough energy point to attack\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	health_ -= amount;
	damage_ += amount;
	std::cout << "ClapTrap " << name_ << " takes " << amount << " point of damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_ > 0 && health_ > 0)
	{
		--energy_;
		health_ += amount;
		std::cout << "ClapTrap " << name_ << " repairs itself and gets " << amount << " health points back\n";
	}
	else
		std::cout << "Not enough energy point to attack\n";
}
