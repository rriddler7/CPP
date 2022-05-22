#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	//	try
//	{
	if (grade > 150)
		throw 1;
	if (grade < 1)
		throw 2;
	this->_grade = grade;
//	}
//	catch (int except)
//	{
//		if (except == 1)
//			std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
//		if (except == 2)
//			std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
//	}
	std::cout << "Constructor Bureaucrat " << this->_name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & prototype) : _name(prototype._name)
{
	std::cout << "Copy constructor Bureaucrat called" << std::endl;
	*this = prototype;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &prototype)
{
	if (this != &prototype)
	{
		this->_grade = prototype._grade;
//		this->_grade = prototype.get.Grade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat " << this->_name << " called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upgrade()
{
	if (getGrade() > 1)
	{
		this->_grade = getGrade() - 1;
	}
	else
	{
		std::cout << "Upgrade is not possible. " << this->_name << " have highest possible grade :)" << std::endl;
	}
}

void	Bureaucrat::downgrade()
{
	if (getGrade() < 150)
	{
		this->_grade = getGrade() + 1;
	}
	else
	{
		std::cout << "Downgrade is not possible. " << this->_name << " have lowest possible grade :(" << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(std::exception &e)
	{
		std::cout << this->_name << " can't sign "
				  << form.getName() << " because "
				  << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
