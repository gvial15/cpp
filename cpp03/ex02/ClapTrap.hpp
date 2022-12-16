#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &og);
		ClapTrap&	operator= (const ClapTrap& og);
		~ClapTrap();

	void 	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	std::string	getName() const;
	int			getHealth() const;
	int			getEnergy() const;
	int			getDamage() const;

	protected:
		std::string name_;
		int			health_;
		int			energy_;
		int			damage_;
};

#endif