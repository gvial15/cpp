#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		Weapon		*weapon_;
		std::string	name_;

	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif