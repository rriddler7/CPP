#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & prototype)
{
	std::cout << "Copy constructor Bureaucrat called" << std::endl;
	*this = prototype;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &prototype)
{
	if (this != &prototype)
	{
		this->_name = prototype->_name;
		this->_grade = prototype->_grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}
