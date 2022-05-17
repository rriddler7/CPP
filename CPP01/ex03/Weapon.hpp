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

		void	setType(const std::string &);
		const std::string   &getType() const;
};

#endif
