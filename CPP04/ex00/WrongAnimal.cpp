#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal & prototype)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = prototype;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &prototype)
{
	if (this != &prototype)
	{
		this->_type = prototype._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->_type << " makes wrong sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
