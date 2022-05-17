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
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
		int					fixpointnmb;
		static const int	fractbit = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
