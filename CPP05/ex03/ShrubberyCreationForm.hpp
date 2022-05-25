#include <fstream>

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm & operator = (const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();
	std::string	getTarget() const;
	virtual void	execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return "grade of form is too high!";
		}
	};

private:
	ShrubberyCreationForm();
	std::string			_target;
	static const std::string	_tree;
};

#endif
