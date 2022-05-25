#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor Intern called" << std::endl;
}

Intern::Intern(const Intern & prototype)
{
	std::cout << "Copy constructor Intern called" << std::endl;
	*this = prototype;
}

Intern &Intern::operator = (const Intern &prototype)
{
	(void)prototype;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Destructor Intern called" << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	Form *form = NULL;

	std::string	forms[3] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm" };
	while (i < 3 && name != forms[i])
		++i;
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw (FormNameException());
	}
	std::cout << "Intern creates " << *form << std::endl;
	return form;
}
