#include <iostream>
#include "whatever.hpp"

int main()
{
	int a = 21;
	int b = 42;
	float a1 = 21.21;
	float b1 = 42.42;
	char a2 = 'x';
	char b2 = 'y';
	std::string s1 = "freedom";
	std::string s2 = "slavery";

	std::cout << "Test swap" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a1, b1);
	std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	swap(a2, b2);
	std::cout << "a2 = " << a2 << ", b2 = " << b2 << std::endl;
	swap(s1, s2);
	std::cout << s1 << " is " << s2 << std::endl;
	std::cout << std::endl;

	std::cout << "Test min" << std::endl;
	int mn = min(a, b);
	std::cout << "min = " << mn << std::endl;
	float mn1 = min(a1, b1);
	std::cout << "min = " << mn1 << std::endl;
	char mn2 = min(a2, b2);
	std::cout << "min = " << mn2 << std::endl;
	std::string smin = min(s1, s2);
	std::cout << "min = " << smin << std::endl;
	std::cout << std::endl;

	std::cout << "Test max" << std::endl;
	int mx = max(a, b);
	std::cout << "max = " << mx << std::endl;
	float mx1 = max(a1, b1);
	std::cout << "max = " << mx1 << std::endl;
	char mx2 = max(a2, b2);
	std::cout << "max = " << mx2 << std::endl;
	std::string smax = max(s1, s2);
	std::cout << "max = " << smax << std::endl;
}
