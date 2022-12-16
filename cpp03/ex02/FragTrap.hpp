#ifndef FRAGTRAP_H
#define FRAGTRAP_H

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &og);
		FragTrap& operator= (const FragTrap &og);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
