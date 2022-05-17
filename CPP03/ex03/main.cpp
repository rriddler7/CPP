#include "DiamondTrap.hpp"

int main()
{
//	ClapTrap tom("Tom");
//	tom.takeDamage(5);
//	tom.attack("Jerry");
//	tom.beRepaired(2);
//
//	ScavTrap jerry("Jerry");
//	jerry.takeDamage(1);
//	jerry.attack("Tom");
//	jerry.beRepaired(3);
//
//	FragTrap mammy("Mammy Two Shoes");
//	mammy.highFivesGuys();
//	mammy.takeDamage(1);
//	mammy.attack("Jerry");
//	mammy.beRepaired(3);

	DiamondTrap monster("Monster");
	monster.whoAmI();
	monster.showStats();
	monster.attack("Tom, Jerry and Mammy Two Shoes");
	monster.takeDamage(7);
	monster.beRepaired(10);
	monster.guardGate();
	monster.highFivesGuys();

	return (0);
}
