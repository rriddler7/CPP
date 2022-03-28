#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombieHorde;

	i = 0;
	zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
		i++;
	}
	return(zombieHorde);
}
