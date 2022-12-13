#include "ClapTrap.hpp"

int	main()
{
	ClapTrap test("test");

	test.attack("test1");
	test.takeDamage(6);
	test.beRepaired(2);

	std::cout << "\nClapTrap: \n";
	std::cout << "health: " << test.getHealth() << std::endl;
	std::cout << "energy:  " << test.getEnergy() << std::endl;
	std::cout << "damage: " << test.getDamage() << std::endl << std::endl;

	test.takeDamage(6);
	test.attack("test1");
	
	std::cout << "\nClapTrap: \n";
	std::cout << "health: " << test.getHealth() << std::endl;
	std::cout << "energy:  " << test.getEnergy() << std::endl;
	std::cout << "damage: " << test.getDamage() << std::endl << std::endl;
}