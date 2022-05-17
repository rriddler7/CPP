#include "Fixed.hpp"

Fixed::Fixed(void) : fixpointnmb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & prototype)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = prototype;
}

Fixed &Fixed::operator = (const Fixed &prototype)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &prototype)
	{
		this->fixpointnmb = prototype.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixpointnmb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixpointnmb = raw;
}
