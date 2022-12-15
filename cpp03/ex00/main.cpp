#include "ClapTrap.hpp"

int	main()
{	
	ClapTrap test0;
	ClapTrap test1("test");
	ClapTrap test2(test1);

	std::cout << "\ntest2: (copy constructor test) \n";
	std::cout << "health: " << test2.getHealth() << std::endl;
	std::cout << "energy:  " << test2.getEnergy() << std::endl;
	std::cout << "damage: " << test2.getDamage() << std::endl << std::endl;

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

	std::cout << "\ntest0: (copy assignement operator test)\n";
	std::cout << "health: " << test0.getHealth() << std::endl;
	std::cout << "energy:  " << test0.getEnergy() << std::endl;
	std::cout << "damage: " << test0.getDamage() << std::endl << std::endl;
}
