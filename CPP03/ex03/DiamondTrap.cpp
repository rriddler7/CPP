#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
		ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	_name = name;
	ScavTrap::setEnergyPoints();
	FragTrap::setHitPoints();
	FragTrap::setAttackDamage();
	std::cout << "Constructor DiamondTrap " << this->_name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & prototype)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = prototype;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &prototype)
{
	if (this != &prototype)
	{
		this->_name = prototype._name;
		this->_hitPoints = prototype._hitPoints;
		this->_energyPoints = prototype._energyPoints;
		this->_attackDamage = prototype._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap " << this->_name << " called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name of DiamondTrap is " << this->_name << std::endl;
	std::cout << "Name of ClapTrap is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::showStats()
{
	std::cout << "DiamondTrap " << this->_name << " has " << this->_hitPoints << " hit points, " << this->_energyPoints << " energy points and " << this->_attackDamage << " attack damage now." << std::endl;
}
