#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &oldClapTrap);
		ClapTrap&	operator= (const ClapTrap& other);
		~ClapTrap();

	void 	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	std::string	getName() const;
	int			getHealth() const;
	int			getEnergy() const;
	int			getDamage() const;

	private:
		std::string name_;
		int			health_;
		int			energy_;
		int			damage_;
};

#endif