#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Constructor FragTrap " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & prototype)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = prototype;
}

FragTrap &FragTrap::operator = (const FragTrap &prototype)
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

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap " << this->_name << " called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " fives request!" << std::endl;
}
