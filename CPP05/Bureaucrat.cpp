#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Constructor Bureaucrat called" << std::endl;
	this->_name = name;
	try
	{
		if (grade < 1)
			throw 1;
		if (grade > 150)
			throw 2;
	}
	this->_grade = grade;
	catch (int except)
	{
		if (except == 1)
			std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
		if (except == 2)
			std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
	}
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << "Bureaucrat " << this->_name << " with grade " this->_grade;
	return (out);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade()
{
	return (this->_grade);
}

void	Bureaucrat::raise(int grade)
{

}
void	lower(int grade)


Fixed	&Fixed::operator ++()
{
	this->fixpointnmb++;

	return *this;
}
Fixed	&Fixed::operator --()
{
	this->fixpointnmb--;

	return *this;
}
