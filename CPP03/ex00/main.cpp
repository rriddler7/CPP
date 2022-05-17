#include "ClapTrap.hpp"

int main()
{
	ClapTrap tom("Tom");
	ClapTrap jerry("Jerry");

	tom.takeDamage(5);
	tom.attack("Jerry");
	tom.beRepaired(2);

	jerry.takeDamage(4);
	jerry.attack("Tom");
	jerry.beRepaired(3);
	return (0);
}

