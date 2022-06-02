#include "Span.hpp"

Span::Span() : _len(0)
{
}

Span::Span(unsigned int N) : _len(N)
{
}

Span::Span(const Span & prototype) : _len(prototype._len)
{
	*this = prototype;
}

Span & Span::operator=(const Span &prototype)
{
	if (this != &prototype)
	{
		this->_len = prototype._len;
		this->_nmbrs = prototype._nmbrs;
	}

	return *this;
}

Span::~Span()
{
}

unsigned int Span::getLen()
{
	return _len;
}

void	Span::addNumber(int nmb)
{

	if (_nmbrs.size() >= _len)
		throw (SpanFilled());
	else
		_nmbrs.push_back(nmb);

}

int	Span::shortestSpan()
{
	if (this->_nmbrs.size() < 2)
		throw (NoSpan());
	else
	{
		std::vector<int> tmp = this->_nmbrs;
		std::vector<int>::iterator start = tmp.begin();
		std::vector<int>::iterator finish = tmp.end();
		std::sort(start, finish);
		std::adjacent_difference(start, finish, start);
			return *std::min_element(start + 1, finish);
	}
}

int Span::longestSpan()
{
	if (this->_nmbrs.size() < 2)
		throw (NoSpan());
	else
	{
		std::vector<int> tmp = this->_nmbrs;
		std::vector<int>::iterator start = tmp.begin();
		std::vector<int>::iterator finish = tmp.end();
			return *std::max_element(start, finish) - *std::min_element(start, finish);
	}
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator finish)
{
	if (this->_nmbrs.size() + std::distance(start, finish) > this->_len)
		throw (SpanFilled());
	this->_nmbrs.insert(this->_nmbrs.end(), start, finish);
}

