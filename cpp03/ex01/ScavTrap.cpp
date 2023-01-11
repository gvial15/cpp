#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// constructor
ScavTrap::ScavTrap() {};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	health_ = 100;
	energy_ = 50;
	damage_ = 20;
	std::cout << "ScavTrap constructor called\n";
}

// destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
};

// copy constructor
ScavTrap::ScavTrap(const ScavTrap &og) {
	name_ = og.getName();
	health_ = og.getHealth();
	energy_ = og.getEnergy();
	damage_ = og.getDamage();
	std::cout << "ScavTrap copy constructor called\n";
};

// copy assignement operator
ScavTrap& ScavTrap::operator= (const ScavTrap &og) {
	if (this == &og)
		return (*this);
	std::cout << "ScavTrap copy assignement operator called\n";
	this->name_ = og.getName();
	this->health_ = og.getHealth();
	this->energy_ = og.getEnergy();
	this->damage_ = og.getDamage();
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << name_ << " is now in gatekeeper mode\n";
}
