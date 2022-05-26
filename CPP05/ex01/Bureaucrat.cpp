#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw (GradeTooLowException());
	else if (grade < 1)
		throw (GradeTooHighException());
	elseы
	{
		this->_grade = grade;
		std::cout << "Constructor Bureaucrat " << this->_name << " called" << std::endl;
	}
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
	try
	{
		if (getGrade() == 1)
			throw (GradeTooHighException());
		else
		{
			this->_grade = getGrade() - 1;
			std::cout << "Bureaucrat " << this->_name << " upgraded to " << this->_grade << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Upgrade of " << this->_name << " is not possible" << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::downgrade()
{
	try
	{
		if (getGrade() == 150)
			throw (GradeTooLowException());
		else
		{
			this->_grade = getGrade() + 1;
			std::cout << "Bureaucrat " << this->_name << " downgraded to " << this->_grade << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Downgrade of " << this->_name << " is not possible" << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		if (form.getSign() == true)
		{
			std::cout << this->_name << " signed " << form.getName() << std::endl;
		}
	}
	catch(std::exception &error)
	{
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << error.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
