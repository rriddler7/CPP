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

//	assign(prototype.begin(), prototype.end()); //Присваивает вектору новое содержимое , заменяя его текущее содержимое и соответствующим образом изменяя его размер .

	return *this;
}

Span::~Span()
{
}

unsigned int Span::getLen()
{
	return _len;
}

void	Span::addNumber(unsigned int nmb)
{
	try
	{
		if (_nmbrs.size() >= _len)
			throw (SpanFilled());
		else
		{
			_nmbrs.push_back(nmb);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error:" << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan()
{
	try
	{
		if (_len < 2)
			throw (NoSpan());
		else
		{
			std::vector<int> tmp = this->_nmbrs;
			std::vector<int>::iterator start = tmp.begin();
			std::vector<int>::iterator finish = tmp.end();
			std::sort(start, finish);
			std::adjacent_difference(start, finish, start); //Вычислить соседнюю разницу диапазона
			return *std::min_element(start, finish);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

unsigned int Span::longestSpan()
{
	try
	{
		if (_len < 2)
			throw (NoSpan());
		else
		{
			std::vector<int> tmp = this->_nmbrs;
			std::vector<int>::iterator start = tmp.begin();
			std::vector<int>::iterator finish = tmp.end();
			return *std::max_element(start, finish) - *std::min_element(start, finish);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

void	Span::rangeIterators(std::vector<int>::iterator start, std::vector<int>::iterator finish)
{
	this->_nmbrs.insert(this->_nmbrs.end(), start, finish);
}

