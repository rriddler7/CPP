#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
//	std::cout << "Tests: create vogon!" << std::endl;
//	try
//	{
//		Bureaucrat vogon("Vogon", 21);
////		Bureaucrat vogon("Vogon", 151);
////		Bureaucrat vogon("Vogon", 0);
//		std::cout << vogon;
//	}
//	catch (int except)
//	{
//		if (except == 1)
//			std::cout << "Bureaucrat::GradeTooLowException" << std::endl;
//		if (except == 2)
//			std::cout << "Bureaucrat::GradeTooHighException" << std::endl;
//	}
//	std::cout << std::endl;
//
//	std::cout << "Tests: change grade!" << std::endl;
//	Bureaucrat vogon2("Vogon2", 42);
//	vogon2.upgrade();
//	std::cout << vogon2;
//	vogon2.downgrade();
//	std::cout << vogon2;
//	std::cout << std::endl;
//	Bureaucrat vogon3("Vogon_senior", 1);
//	vogon3.upgrade();
//	std::cout << std::endl;
//	Bureaucrat vogon4("Vogon_junior", 150);
//	vogon4.downgrade();
//	std::cout << std::endl;

	std::cout << "Tests: create form!" << std::endl;
	try
	{
//		Form form("Form1", 21, 42);
//		Form form("Form1", 21, 151);
		Form form("Form1", 0, 42);
		std::cout << form;
	}
	catch (int except)
	{
		if (except == 1)
			std::cout << "Form::GradeTooLowException" << std::endl;
		if (except == 2)
			std::cout << "Form::GradeTooHighException" << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
