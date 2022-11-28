#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

	void	announce(void);

	private:
		std::string name_;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
