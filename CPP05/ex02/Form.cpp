#include "Form.hpp"

Form::Form() : _name("Noname"), _gradeSign(0), _gradeExecute(0)
{
	std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) :
		_name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw (GradeTooLowException());
	else if (gradeSign < 1 || gradeExecute < 1)
		throw (GradeTooHighException());
	{
		std::cout << "Constructor Form " << this->_name << " called" << std::endl;
	}
}

Form::Form(const Form & prototype) :
		_name(prototype._name), _gradeSign(prototype._gradeSign), _gradeExecute(prototype._gradeExecute)
{
	std::cout << "Copy constructor Form called" << std::endl;
	*this = prototype;
}

Form &Form::operator = (const Form &prototype)
{
	if (this != &prototype)
	{
		this->_sign = prototype._sign;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor Form " << this->_name << " called" << std::endl;
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_sign);
}

int	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int	Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->_gradeSign)
			throw (GradeTooHighException());
		else
		{
			this->_sign = true;
			std::cout << "Form " << this->_name << " signed by Bureaucrat " << bureaucrat.getName() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn’t sign " << bureaucrat.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form " << form.getName() << " with minimal grade: to sign " << form.getGradeSign() << ", to  execute " << form.getGradeExecute() << ", signing status: " << form.getSign() << std::endl;
	return (out);
}
