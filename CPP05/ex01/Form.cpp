#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) :
		_name(name), _sign(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw 1;
	if (gradeSign < 1 || gradeExecute < 1)
		throw 2;
	std::cout << "Constructor Form " << this->_name << " called" << std::endl;
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

//Form::Form()
//{
//	std::cout << "Default constructor Form called" << std::endl;
//}

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
	if (this->_sign == true)
		throw 1;
	if (bureaucrat.getGrade() >= this->_gradeSign)
		throw 2;
	this->_sign = true;
	}
	catch (int except)
	{
		if (except == 1)
			std::cout << "Form::SignedException" << std::endl;
		if (except == 2)
			std::cout << "Form::GradeTooLowException" << std::endl;
	}

//	if (this->_sign == true)
//	{
//		throw exception("Form::SignedException");
//	}
//	if (bureaucrat.getGrade() >= this->_gradeSign)
//	{
//		throw exception("Form::GradeTooLowException");
//	}
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form " << form.getName() << std::endl;
	return (out);
}
