#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{	
	FragTrap	Frag1("Frag1");
	FragTrap	Frag2;
	ClapTrap	Clap1("Clap1");
	FragTrap	Frag1Copy(Frag1);

	std::cout << "\nScav1Copy: (copy constructor test) \n";
	std::cout << "health: " << Frag1Copy.getHealth() << std::endl;
	std::cout << "energy:  " << Frag1Copy.getEnergy() << std::endl;
	std::cout << "damage: " << Frag1Copy.getDamage() << std::endl << std::endl;

	std::cout << "Scav1: \n";
	std::cout << "health: " << Frag1.getHealth() << std::endl;
	std::cout << "energy:  " << Frag1.getEnergy() << std::endl;
	std::cout << "damage: " << Frag1.getDamage() << std::endl << std::endl;

	std::cout << "Clap1: \n";
	std::cout << "health: " << Clap1.getHealth() << std::endl;
	std::cout << "energy:  " << Clap1.getEnergy() << std::endl;
	std::cout << "damage: " << Clap1.getDamage() << std::endl << std::endl;

	Frag1.attack("Clap1");
	Clap1.takeDamage(1);
	Clap1.beRepaired(1);

	std::cout << "\nScav1: \n";
	std::cout << "health: " << Frag1.getHealth() << std::endl;
	std::cout << "energy:  " << Frag1.getEnergy() << std::endl;
	std::cout << "damage: " << Frag1.getDamage() << std::endl << std::endl;

	std::cout << "Clap1: \n";
	std::cout << "health: " << Clap1.getHealth() << std::endl;
	std::cout << "energy:  " << Clap1.getEnergy() << std::endl;
	std::cout << "damage: " << Clap1.getDamage() << std::endl << std::endl;

	Frag2 = Frag1;

	std::cout << "\nFragtrap: (copy assignement operator test)\n";
	std::cout << "Frag2: \n";
	std::cout << "health: " << Frag2.getHealth() << std::endl;
	std::cout << "energy:  " << Frag2.getEnergy() << std::endl;
	std::cout << "damage: " << Frag2.getDamage() << std::endl << std::endl;

	Frag2.highFivesGuys();
	std::cout << std::endl;
}
