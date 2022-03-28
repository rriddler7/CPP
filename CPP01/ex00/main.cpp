#include "../Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie  stackZombie("Stack");
	Zombie  *heapZombie;

	stackZombie.announce();
	randomChump("Random");
	heapZombie = newZombie("Heap");
	heapZombie->announce();
	delete(heapZombie);

	return (0);
}
