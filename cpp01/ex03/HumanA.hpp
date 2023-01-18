#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		Weapon		&weapon_;
		std::string	name_;

	void	attack();
};

#endif