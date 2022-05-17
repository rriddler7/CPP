#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed&);
	Fixed & operator = (const Fixed &);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const value);

private:
		int					fixpointnmb;
		static const int	fractbit = 8;
};

#endif
