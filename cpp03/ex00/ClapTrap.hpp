#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap();

	void 	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	std::string	getName();
	int			getHealth();
	int			getEnergy();
	int			getDamage();

	private:
		std::string name_;
		int			health_;
		int			energy_;
		int			damage_;
};

#endif