#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{	
	ScavTrap	Scav1("Scav1");
	ScavTrap	Scav2;
	ClapTrap	Clap1("Clap1");
	ScavTrap	Scav1Copy(Scav1);

	std::cout << "\nScav1Copy: (copy constructor test) \n";
	std::cout << "health: " << Scav1Copy.getHealth() << std::endl;
	std::cout << "energy:  " << Scav1Copy.getEnergy() << std::endl;
	std::cout << "damage: " << Scav1Copy.getDamage() << std::endl << std::endl;

	std::cout << "Scav1: \n";
	std::cout << "health: " << Scav1.getHealth() << std::endl;
	std::cout << "energy:  " << Scav1.getEnergy() << std::endl;
	std::cout << "damage: " << Scav1.getDamage() << std::endl << std::endl;

	std::cout << "Clap1: \n";
	std::cout << "health: " << Clap1.getHealth() << std::endl;
	std::cout << "energy:  " << Clap1.getEnergy() << std::endl;
	std::cout << "damage: " << Clap1.getDamage() << std::endl << std::endl;

	Scav1.attack("Clap1");
	Clap1.takeDamage(1);
	Clap1.beRepaired(1);

	std::cout << "\nScav1: \n";
	std::cout << "health: " << Scav1.getHealth() << std::endl;
	std::cout << "energy:  " << Scav1.getEnergy() << std::endl;
	std::cout << "damage: " << Scav1.getDamage() << std::endl << std::endl;

	std::cout << "Clap1: \n";
	std::cout << "health: " << Clap1.getHealth() << std::endl;
	std::cout << "energy:  " << Clap1.getEnergy() << std::endl;
	std::cout << "damage: " << Clap1.getDamage() << std::endl << std::endl;

	Scav2 = Scav1;

	std::cout << "\nScavtrap: (copy assignement operator test)\n";
	std::cout << "Scav2: \n";
	std::cout << "health: " << Scav2.getHealth() << std::endl;
	std::cout << "energy:  " << Scav2.getEnergy() << std::endl;
	std::cout << "damage: " << Scav2.getDamage() << std::endl << std::endl;

	Scav2.guardGate();
	std::cout << std::endl;
}
