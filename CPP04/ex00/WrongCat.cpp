#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor WrongCat called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & prototype)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
	*this = prototype;
}

WrongCat &WrongCat::operator = (const WrongCat &prototype)
{
	if (this != &prototype)
	{
		this->_type = prototype._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << this->_type << " makes wrong non-feline sound" << std::endl;
}
