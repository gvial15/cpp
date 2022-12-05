#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie = newZombie("malloc'd Zombie");
	randomChump("randZombie");
	zombie->announce();
	delete zombie;

	// an object that is created on the stack
	// will be deleted as soon as the function it was created in exits.

	// In this case "randZombie" is created AND deleted in randomChump().
	// malloc'd zombie won't be deleted until i use the keyword 'delete' on it.
}