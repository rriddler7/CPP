#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "Tests: execute forms!" << std::endl;
	Bureaucrat				Vogon("Vogon", 4);
	std::cout << std::endl;
	Bureaucrat				Vogon1("Vogon1", 140);
	std::cout << std::endl;
	ShrubberyCreationForm	form1("treeform");
	std::cout << std::endl;
	RobotomyRequestForm		form2("robotform");
	std::cout << std::endl;
	PresidentialPardonForm	form3("pardonform");
	std::cout << std::endl;

	Vogon.signForm(form1);
	Vogon.executeForm(form1);
	Vogon.executeForm(form1);
	std::cout << std::endl;
	Vogon.executeForm(form2);
	Vogon.signForm(form2);
	Vogon.executeForm(form2);
	std::cout << std::endl;
	Vogon1.signForm(form3);
	Vogon.executeForm(form3);
	Vogon.signForm(form3);
	Vogon.executeForm(form3);

	return 0;
}
