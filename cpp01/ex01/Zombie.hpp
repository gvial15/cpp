#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();

	void	announce(void);
	void	setName(std::string name);

	private:
		std::string name_;
};

Zombie* zombieHorde(int N, std::string name);

#endif
