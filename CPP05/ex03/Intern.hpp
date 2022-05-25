#include <iostream>
#include <string>

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &);
	Intern & operator = (const Intern &);
	~Intern();
	Form	*makeForm(const std::string name, const std::string target);

	class FormNameException : public std::exception
	{
		const char* what() const throw()
		{
			return "form name doesn't exist!";
		}
	};
};

#endif
