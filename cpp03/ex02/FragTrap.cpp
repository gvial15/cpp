#include "FragTrap.hpp"

// constructor
FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	health_ = 100;
	energy_ = 100;
	damage_ = 30;
	std::cout << "FragTrap constructor called on " << name_ << std::endl;
}

// copy constructor
FragTrap::FragTrap(const FragTrap &og) {
	name_ = og.getName();
	health_ = og.getHealth();
	energy_ = og.getEnergy();
	damage_ = og.getDamage();
}

// copy assignement operator
FragTrap&	FragTrap::operator= (const FragTrap &og) {
	if (this == &og)
		return (*this);
	this->name_ = og.getName();
	this->health_ = og.getHealth();
	this->energy_ = og.getEnergy();
	this->damage_ = og.getDamage();
	return (*this);
}

// destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called on " << name_ << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << name_ << " is asking for a high five\n";
}
