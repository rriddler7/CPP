#include "easyfind.hpp"

void	displayInt(int i)
{
	std::cout << i << "  ";
}

int main()
{
	std::cout << "Test: vector" << std::endl;
	std::vector<int> v;
	int nmb = 21;
	std::vector<int>::iterator occur;

	for (size_t i = 0; i < 22; i++)
	{
		v.push_back(nmb++);
	}

	for_each(v.begin(), v.end(), displayInt);
	std::cout << std::endl;
	
	try
	{
		occur = easyfind(v, 42);
		std::cout << "Occurrence of the int value " << *occur << " in vector " << std::endl;
		occur = easyfind(v, 13);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout <<std::endl;

	std::cout << "Test: list" << std::endl;
	std::list<int> l;
	int nmb2 = 42;
	std::list<int>::iterator occur2;

	for (size_t i = 0; i < 22; i++)
	{
		l.push_back(nmb2--);
	}

	for_each(l.begin(), l.end(), displayInt);
	std::cout << std::endl;

	try
	{
		
		occur2 = easyfind(l, 42);
		std::cout << "Occurrence of the int value " << *occur2 << " in list " << std::endl;
		occur2 = easyfind(l, 13);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
