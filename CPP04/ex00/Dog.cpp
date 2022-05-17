#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog & prototype)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = prototype;
}

Dog &Dog::operator = (const Dog &prototype)
{
	if (this != &prototype)
	{
		this->_type = prototype._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " barks" << std::endl;
}
