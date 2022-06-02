#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>	// std::iterator
#include <algorithm>
#include <vector>
#include <list>


class NoOccurence : public std::exception
{
	const char* what() const throw()
	{
		return "no occurrence of the int value";
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int nmb)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), nmb);
	if (it == container.end())
		throw (NoOccurence());
	return it;
}

#endif
