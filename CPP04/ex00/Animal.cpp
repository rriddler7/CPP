#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor Animal called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal & prototype)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = prototype;
}

Animal &Animal::operator = (const Animal &prototype)
{
	if (this != &prototype)
	{
		this->_type = prototype._type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << this->_type << " makes sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
