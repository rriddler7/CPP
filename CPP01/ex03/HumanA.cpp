#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapA) : weapon(weapA)
{
	setName(str);
}

HumanA::~HumanA(void)
{
}

void    HumanA::setName(std::string str)
{
	this->name = str;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

// HumanA(std::string, Weapon); //? HumanA(std::string, Weapon&);
// 		~HumanA(void);
// 		void	setName(std::string);
		