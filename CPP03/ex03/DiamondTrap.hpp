#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap & operator = (const DiamondTrap &);
	~DiamondTrap();
	using ScavTrap::attack;
	void	whoAmI();
	void	showStats();
private:
	std::string _name;
};

#endif
