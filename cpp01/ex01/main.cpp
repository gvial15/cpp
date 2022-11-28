#include "Zombie.hpp"

int	main()
{
	int		N = 5;
	Zombie	*horde = zombieHorde(N, "hordeMember");

	while (N-- > 0)
		horde[N].announce();
	delete [] horde;
}
