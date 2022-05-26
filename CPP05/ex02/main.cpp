#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "Tests: execute forms!" << std::endl;
	Bureaucrat Vogon("Vogon", 5);
	std::cout << std::endl;
	Bureaucrat Vogon1("Vogon1", 138);
	std::cout << std::endl;

	ShrubberyCreationForm	tree("sweet home");
	std::cout << std::endl;

	RobotomyRequestForm		robot("My job");
	std::cout << std::endl;

	PresidentialPardonForm	pardon("Humma Kavula");
	std::cout << std::endl;

	std::cout << tree;
	tree.execute(Vogon);
	Vogon.executeForm(tree);
	std::cout << std::endl;
	tree.execute(Vogon1);
	Vogon1.executeForm(tree);
	std::cout << std::endl;

	std::cout << robot;
	robot.execute(Vogon);
	Vogon.executeForm(robot);
	std::cout << std::endl;
	robot.execute(Vogon1);
	Vogon1.executeForm(robot);
	std::cout << std::endl;

	std::cout << pardon;
	pardon.execute(Vogon);
	Vogon.executeForm(pardon);
	std::cout << std::endl;
	pardon.execute(Vogon1);
	Vogon1.executeForm(pardon);
	std::cout << std::endl;

	return 0;
}
