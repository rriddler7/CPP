#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <math.h>

class Fixed
{
public:
	Fixed();
	Fixed(const int nmb);
	Fixed(const float nmb);
	Fixed(const Fixed&);
	Fixed & operator = (const Fixed &);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator >(const Fixed &) const;
	bool	operator <(const Fixed &) const;
	bool	operator >=(const Fixed &) const;
	bool	operator <=(const Fixed &) const;
	bool	operator ==(const Fixed &) const;
	bool	operator !=(const Fixed &) const;
	Fixed	operator +(const Fixed &) const;
	Fixed	operator -(const Fixed &) const;
	Fixed	operator *(const Fixed &) const;
	Fixed	operator /(const Fixed &) const;
	Fixed	&operator ++();
	Fixed	&operator --();
	Fixed	operator ++(int);
	Fixed	operator --(int);
	static Fixed		&min(Fixed &a, Fixed &b);
	const static Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	const static Fixed	&max(const Fixed &a, const Fixed &b);

private:
		int					fixpointnmb;
		static const int	fractbit = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
