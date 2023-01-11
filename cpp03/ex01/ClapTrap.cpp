#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : 
name_(name), health_(10), energy_(10), damage_(0) {
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &og) :
	name_(og.name_), health_(og.health_),
	energy_(og.energy_), damage_(og.damage_) {
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& og) {
	if (this == &og)
		return (*this);
	std::cout << "ClapTrap copy assignment operator called\n";
	this->name_ = og.getName();
	this->health_ = og.getHealth();
	this->energy_ = og.getEnergy();
	this->damage_ = og.getDamage();
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
