#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor ClapTrap " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & prototype)
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = prototype;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &prototype)
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

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap " << this->_name << " called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints >= this->_attackDamage && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_hitPoints -= this->_attackDamage;
		this->_energyPoints--;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points after the attack" << std::endl;
	}
	else
	{
		std::cout << "Points are not enough, you can not attack :(" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints >= amount)
	{
		this->_attackDamage += amount;
		std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	}
	else
	{
		std::cout << "Hit points are not enough, you can not take points of damage :(" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << " repairs itself and gets back " << amount << " hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points after repairing" << std::endl;
	}
	else
	{
		std::cout << "Energy points are not enough, you can not repair yourself:(" << std::endl;
	}
}
