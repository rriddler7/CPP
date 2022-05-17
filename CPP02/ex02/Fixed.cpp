#include "Fixed.hpp"

Fixed::Fixed(void) : fixpointnmb(0)
{
}

Fixed::Fixed(const int nmb)
{
	fixpointnmb = nmb << fractbit;
}

Fixed::Fixed(const float nmb)
{
	fixpointnmb = roundf(nmb * (1 << fractbit));
}

Fixed::Fixed(const Fixed & prototype)
{
	*this = prototype;
}

Fixed	&Fixed::operator = (const Fixed &prototype)
{
	if (this != &prototype)
	{
		this->fixpointnmb = prototype.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits() const
{
	return (fixpointnmb);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator ==(const Fixed & other) const
{
	return this->fixpointnmb == other.fixpointnmb;
}

bool	Fixed::operator !=(const Fixed & other) const
{
	return !(this->fixpointnmb == other.fixpointnmb);
}

bool	Fixed::operator >(const Fixed & other) const
{
	return this->fixpointnmb > other.fixpointnmb;
}

bool	Fixed::operator <(const Fixed & other) const
{
	return this->fixpointnmb < other.fixpointnmb;
}

bool	Fixed::operator >=(const Fixed & other) const
{
	return this->fixpointnmb > other.fixpointnmb;
}

bool	Fixed::operator <=(const Fixed & other) const
{
	return this->fixpointnmb <= other.fixpointnmb;
}

Fixed	Fixed::operator +(const Fixed & other) const
{
	Fixed	temp;
	temp.fixpointnmb = this->fixpointnmb + other.fixpointnmb;

	return temp;
}

Fixed	Fixed::operator -(const Fixed & other) const
{
	Fixed	temp;
	temp.fixpointnmb = this->fixpointnmb - other.fixpointnmb;

	return temp;
}

Fixed	Fixed::operator *(const Fixed & other) const
{
	Fixed	temp;
	temp = this->toFloat() * other.toFloat();

	return temp;
}

Fixed	Fixed::operator /(const Fixed & other) const
{
	if (other.fixpointnmb == 0)
	{
		std::cout << "Error: division by zero!" << std::endl;
		exit(1);
	}
	Fixed	temp;
	temp = this->toFloat() / other.toFloat();

	return temp;
}

Fixed	&Fixed::operator ++()
{
	this->fixpointnmb++;

	return *this;
}
Fixed	&Fixed::operator --()
{
	this->fixpointnmb--;

	return *this;
}

Fixed	Fixed::operator ++(int)
{
	Fixed temp(*this);
	this->fixpointnmb++;

	return temp;
}

Fixed	Fixed::operator --(int)
{
	Fixed temp(*this);
	this->fixpointnmb--;

	return temp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
