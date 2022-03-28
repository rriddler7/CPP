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
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

// {
// 	private:
// 		Weapon *weapon; //? Weapon *weapon;
// 		std::string name;
// 	public:
// 		HumanB(std::string);
// 		~HumanB(void);

// 		void	setName(std::string);
// 		void    setWeapon(Weapon&); //?
// 		void	attack(void);
// };
		