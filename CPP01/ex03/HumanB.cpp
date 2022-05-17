#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	setName(str);
}

HumanB::~HumanB(void)
{
}

void    HumanB::setName(std::string str)
{
	this->name = str;
}

void    HumanB::setWeapon(Weapon &weapB)
{
	weapon = &weapB;
}

void	HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << this->name << " without weapon " << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
