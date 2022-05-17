#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

//	std::cout << "My tests" << std::endl;
//	Fixed c = 1000;
//	Fixed d = 1.51f;
////	Fixed d = 1000;
////	Fixed d = 100;
////	Fixed d = 0;
//	std::cout << "Comparison operators" << std::endl;
//	bool result = c == d;
//	std::cout << "result " << result << std::endl;
//	bool result2 = c != d;
//	std::cout << "result2 " << result2 << std::endl;
//	bool result3 = c > d;
//	std::cout << "result3 " << result3 << std::endl;
//	bool result4 = c < d;
//	std::cout << "result4 " << result4 << std::endl;
//	bool result5 = c >= d;
//	std::cout << "result5 " << result5 << std::endl;
//	bool result6 = c <= d;
//	std::cout << "result6 " << result6 << std::endl;
//
//	std::cout << "Arithmetic operators" << std::endl;
//	Fixed sum = c + d;
//	std::cout << "sum " << sum << std::endl;
//	Fixed dif = c - d;
//	std::cout << "dif " << dif << std::endl;
//	Fixed prod = c * d;
//	std::cout << "prod " << prod << std::endl;
//	Fixed div = c / d;
//	std::cout << "div " << div << std::endl;
//
//	std::cout << "Decrement operators" << std::endl;
//	std::cout << d << std::endl;
//	std::cout << --d << std::endl;
//	std::cout << d << std::endl;
//	std::cout << d-- << std::endl;
//	std::cout << d << std::endl;
//	std::cout << Fixed::min( c, d ) << std::endl;

	return 0;
}
