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

void    Weapon::setType(std::string str)
{
	this->type = str;
}

const std::string   &Weapon::getType(void) const
{
	return type;
}

// class Weapon
// {
// 	private:
// 		std::string type;
// 	public:
// 		Weapon(void);
// 		Weapon(std::string);
// 		~Weapon(void);

// 		void	setType(std::string);
// 		// void	getType(std::string); 
// 		const std::string   &getType(void) const;
// };
		