#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span &);
	Span & operator = (const Span &);
	~Span();
	unsigned int getLen();
	void addNumber(int nmb);
	int shortestSpan();
	int longestSpan();
	void addRange(std::vector<int>::iterator start, std::vector<int>::iterator finish);

	class NoSpan : public std::exception
	{
		const char* what() const throw()
		{
			return " no span can be found";
		}
	};

	class SpanFilled : public std::exception
	{
		const char* what() const throw()
		{
			return " there are already N elements stored";
		}
	};

private:
	Span();
	unsigned int _len;
	std::vector<int> _nmbrs;
};

#endif
