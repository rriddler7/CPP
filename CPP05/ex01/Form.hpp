#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form;

# include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string name, const int gradeSign, const int gradeExecute);
	Form(const Form &);
	Form & operator = (const Form &);
	~Form();
	std::string	getName() const;
	bool 		getSign() const;
	int			getGradeSign() const;
	int			getGradeExecute() const;
	void	beSigned(Bureaucrat &bureaucrat);
private:
	Form();
	const std::string	_name;
	bool 				_sign;
	const int			_gradeSign;
	const int			_gradeExecute;
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif
