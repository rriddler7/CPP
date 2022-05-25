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
	Form* f = NULL;

	std::string	forms[3] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm:" };
	while (i < 3 && forms[i] != name)
		++i;
	switch (i)
	{
		case 0:
			f = new ShrubberyCreationForm(formTarget);
			break;
		case 1:
			f = new RobotomyRequestForm(formTarget);
			break;
		case 2:
			f = new PresidentialPardonForm(formTarget);
			break;
		default:
			throw FormIsNotCreatedException();
	}
	std::cout << "Intern creates " << *f << std::endl;
	return f;
}

const char* Intern::FormIsNotCreatedException::what() const throw()
{
	return "Intern couldn't create form!";
}