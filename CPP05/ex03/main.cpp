#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern intern;
	Form *form = NULL;

	try
	{
		form = intern.makeForm("ShrubberyCreationForm", "TreeForm");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Intern couldn’t create form because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("RobotomyRequestForm", "Bender");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Intern couldn’t create form because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("PresidentialPardonForm", "Pardon");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Intern couldn’t create form because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("UncorrectName", "Uncorrect");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Intern couldn’t create form because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
