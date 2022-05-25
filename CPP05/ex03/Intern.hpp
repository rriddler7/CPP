#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

class Intern {
public:
	Intern();
	Intern(const Intern &);
	Intern & operator = (const Intern &);
	~Intern();
	Form	*makeForm(const std::string name, constd std::string target);

	class FormIsNotCreatedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

//std::ostream &operator<<(std::ostream &out, Intern &bureaucrat);

#endif
