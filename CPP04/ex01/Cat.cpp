#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat & prototype)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = prototype;
}

Cat &Cat::operator = (const Cat &prototype)
{
	if (this != &prototype)
	{
		this->_type = prototype._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << this->_type << " meows" << std::endl;
}
