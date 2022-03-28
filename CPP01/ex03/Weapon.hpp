#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);

		void	setType(std::string);
		// void	getType(std::string); 
		const std::string   &getType(void) const;
};

#endif
