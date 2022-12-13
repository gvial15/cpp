#include "ClapTrap.hpp"

int	main()
{
	ClapTrap test("test");

	test.attack("test1");
	test.takeDamage(6);
	test.beRepaired(2);

	std::cout << "health: " << test.getHealth() << std::endl;
	std::cout << "energy:  " << test.getEnergy() << std::endl;
	std::cout << "damage: " << test.getDamage() << std::endl;
}