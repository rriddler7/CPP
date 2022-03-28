#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string str)
{
	setName(str);
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " destroyed" << std::endl;
}

void    Zombie::setName(std::string str)
{
	name = str;
}

void    Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
