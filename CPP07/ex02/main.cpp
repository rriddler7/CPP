#include "Array.hpp"

int main()
{
	std::cout << "Test: create an empty array" << std::endl;
	Array<int> a;
	std::cout << "int array: " << a << std::endl;
	std::cout << std::endl;
	Array<float> a1;
	std::cout << "float array: " << a1 << std::endl;
	std::cout << std::endl;
	Array<char> a2;
	std::cout << "char array: " << a2 << std::endl;
	std::cout << std::endl;

	std::cout << "Test: copy constructor" << std::endl;
	Array<char> d(5);
	for (unsigned int i = 0; i < d.size(); i++)
	{
		d[i] = 'a';
	}
	std::cout << "char array d: " << d << std::endl;
	std::cout << std::endl;
	Array<char> e(d);
	std::cout << "copy char array e: " << e << std::endl;
	std::cout << std::endl;

	std::cout << "Test: assignment operator" << std::endl;
	Array<int> b(13);
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] = 21;
	}
	std::cout << "int array b: " << b << std::endl;
	std::cout << std::endl;

	Array<int> c(7);
	for (unsigned int i = 0; i < c.size(); i++)
	{
		c[i] = 42;
	}
	std::cout << "int array c: " << c << std::endl;
	std::cout << std::endl;

	b = c;
	std::cout << "int array new b: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "Test: index is out of bounds" << std::endl;
	try
	{
			b[6] = 21;
			e[4] = 'b';
//			b[7] = 21;
//			e[5] = 'b';
			std::cout << "test b: " << b << std::endl;
			std::cout << "test e: " << e << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
