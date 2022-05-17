#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string str)
{
	setType(str);
}

Weapon::~Weapon(void)
{
}

void    Weapon::setType(const std::string &str)
{
	this->type = str;
}

const std::string   &Weapon::getType() const
{
	return type;
}
