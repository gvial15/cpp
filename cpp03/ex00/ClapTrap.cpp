#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() {}

// constructor
ClapTrap::ClapTrap(std::string name) : 
name_(name), health_(10), energy_(10), damage_(0) {
	std::cout << "Default constructor called\n";
}

// destructor
ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called\n";
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &oldClapTrap) :
	name_(oldClapTrap.name_), health_(oldClapTrap.health_),
	energy_(oldClapTrap.energy_), damage_(oldClapTrap.damage_) {
	std::cout << "Copy constructor called\n";
}

// copy assignement operator
ClapTrap&	ClapTrap::operator= (const ClapTrap& other) {
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator called\n";
	this->name_ = other.getName();
	this->health_ = other.getHealth();
	this->energy_ = other.getEnergy();
	this->damage_ = other.getDamage();
	return (*this);
}

std::string	ClapTrap::getName() const {
	return (name_);
}

int	ClapTrap::getHealth() const {
	return (health_);
}

int	ClapTrap::getDamage() const {
	return (damage_);
}

int	ClapTrap::getEnergy() const {
	return (energy_);
}

void 	ClapTrap::attack(const std::string& target) {
	if (energy_ > 0 && health_ > 0)
	{
		std::cout << name_ << " attacks " << target << ", causing 1 points of damage!\n";
		--energy_;
	}
	else
		std::cout << name_ << " Doesn't have enough energy point to attack\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	health_ -= amount;
	damage_ += amount;
	std::cout << name_ << " takes " << amount << " point of damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_ > 0 && health_ > 0)
	{
		--energy_;
		health_ += amount;
		std::cout << name_ << " repairs itself and gets " << amount << " health points back\n";
	}
	else
		std::cout << name_ << " Doesn't have enough energy point to attack\n";
}
