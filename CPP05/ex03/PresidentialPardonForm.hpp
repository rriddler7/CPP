#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm & operator = (const PresidentialPardonForm &);
	virtual ~PresidentialPardonForm();
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
	PresidentialPardonForm();
	std::string			_target;
};

#endif
