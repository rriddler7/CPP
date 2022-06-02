#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	MutantStack(): std::stack<T>()
	{}

	MutantStack(const MutantStack<T> &other) : std::stack<T>(other)
	{}

	MutantStack<T> &operator=(const MutantStack<T> &other)
	{
		this->c = other.c;
		return (*this);
	}

	~MutantStack()
	{}

	iterator	begin()
	{
		return this->c.begin();
	}

	iterator	end()
	{
		return this->c.end();
	}
};

#endif

