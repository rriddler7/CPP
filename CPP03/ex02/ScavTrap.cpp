#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Constructor ScavTrap " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & prototype)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = prototype;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &prototype)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap " << this->_name << " called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints >= this->_attackDamage && this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_hitPoints -= this->_attackDamage;
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " has " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points after the attack" << std::endl;
	}
	else
	{
		std::cout << "Points are not enough, you can not attack :(" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
