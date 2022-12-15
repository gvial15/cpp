#include "ClapTrap.hpp"

int	main()
{	
	ClapTrap test0;
	ClapTrap test1("test");

	std::cout << "\ntest1: \n";
	std::cout << "health: " << test1.getHealth() << std::endl;
	std::cout << "energy:  " << test1.getEnergy() << std::endl;
	std::cout << "damage: " << test1.getDamage() << std::endl << std::endl;

	test1.attack("test1");
	test1.takeDamage(6);
	test1.beRepaired(2);

	std::cout << "\ntest1: \n";
	std::cout << "health: " << test1.getHealth() << std::endl;
	std::cout << "energy:  " << test1.getEnergy() << std::endl;
	std::cout << "damage: " << test1.getDamage() << std::endl << std::endl;

	test1.takeDamage(6);
	test1.attack("test1");
	
	std::cout << "\ntest1: \n";
	std::cout << "health: " << test1.getHealth() << std::endl;
	std::cout << "energy:  " << test1.getEnergy() << std::endl;
	std::cout << "damage: " << test1.getDamage() << std::endl << std::endl;

	test0 = test1;
}
