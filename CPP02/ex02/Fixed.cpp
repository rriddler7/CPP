#include "Fixed.hpp"

Fixed::Fixed(void) : fixpointnmb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nmb)
{
	std::cout << "Int constructor called" << std::endl;
	fixpointnmb = nmb << fractbit;
//	fixpointnmb = fixpointnmb + 97;
//	char a = fixpointnmb % 256;
	std::cout << fixpointnmb << std::endl;
//	std::cout << a << std::endl;
}

Fixed::Fixed(const float nmb)
{
	std::cout << "Float constructor called" << std::endl;
	fixpointnmb = roundf(nmb * (1 << fractbit));
	std::cout << fixpointnmb << std::endl;
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

int		Fixed::toInt(void) const
{
	return (fixpointnmb >> fractbit);
}

float	Fixed::toFloat(void) const
{
	return ((float)fixpointnmb / (1 << fractbit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
