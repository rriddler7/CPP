//#include <cstdlib>
//#include <ctime>

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm & operator = (const RobotomyRequestForm &);
	virtual ~RobotomyRequestForm();
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
	RobotomyRequestForm();
	std::string			_target;
};

#endif
