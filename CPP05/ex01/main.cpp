#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
//	std::cout << "Tests: create Vogon!" << std::endl;
//	try
//	{
////		Bureaucrat vogon("Vogon", 21);
////		Bureaucrat vogon("Vogon", 0);
//		Bureaucrat vogon("Vogon", 151);
//		std::cout << vogon;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << "Vogon couldn’t create because " << e.what() << std::endl;
//	}
//	std::cout << std::endl;

	std::cout << "Tests: create Form!" << std::endl;
	try
	{
//		Form form("Form", 21, 42);
//		Form form("Form", 0, 42);
		Form form("Form", 21, 151);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << "Form couldn’t create because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Tests: sign form!" << std::endl;
	Bureaucrat vogon2("Vogon2", 21);
//	Bureaucrat vogon2("Vogon2", 22);
	Form form2("Form2", 21, 42);
	form2.beSigned(vogon2);
	std::cout << std::endl;
	vogon2.signForm(form2);

	return 0;
}
