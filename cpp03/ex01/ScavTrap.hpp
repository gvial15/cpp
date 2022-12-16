#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &og);
		ScavTrap& operator= (const ScavTrap &og);
		~ScavTrap();

		void guardGate();
};

#endif

