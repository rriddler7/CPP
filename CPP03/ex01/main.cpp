#include "ScavTrap.hpp"

int main()
{
//	ClapTrap tom("Tom");
//	tom.takeDamage(5);
//	tom.attack("Jerry");
//	tom.beRepaired(2);

	ScavTrap jerry("Jerry");
	jerry.takeDamage(4);
	jerry.attack("Tom");
	jerry.beRepaired(3);
	jerry.guardGate();

	return (0);
}
