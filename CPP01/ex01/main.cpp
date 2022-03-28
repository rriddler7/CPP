#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main()
{
	int N;
	Zombie *horde;

	N = 10;
	horde = zombieHorde(N, "Batu");
	delete [] horde;

	return (0);
}
