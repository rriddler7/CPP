#include <iostream>
#include "iter.hpp"
#include "Awesome.hpp"

int main()
{
//	std::cout << "Test: int array" << std::endl;
//	int array[] = {3, 14, 159, 26535, 89793238};
//	iter(array, 5, print_el);
//	std::cout << std::endl;
//	iter(array, 5, increm);
//	std::cout << std::endl;
//	std::cout << "Test: float array" << std::endl;
//	float array1[] = {3.14, 21.21, 42.42};
//	iter(array1, 3, print_el);
//	std::cout << std::endl;
//	iter(array1, 3, increm);
//	std::cout << std::endl;
//	std::cout << "Test: char array" << std::endl;
//	char array2[] = {'X', 'Y', 'x', 'y'};
//	iter(array2, 4, print_el);
//	std::cout << std::endl;
//	iter(array2, 4, increm);
//	std::cout << std::endl;
//	std::cout << "Test: string array" << std::endl;
//	std::string array3[] = {"freedom", "slavery", "peace", "war"};
//	iter(array3, 4, print_el);

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
