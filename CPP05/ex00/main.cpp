#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Tests: create Vogon!" << std::endl;
	try
	{
//		Bureaucrat vogon("Vogon", 21);
		Bureaucrat vogon("Vogon", 0);
//		Bureaucrat vogon("Vogon", 151);
		std::cout << vogon;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat couldn’t create because " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Tests: change grade!" << std::endl;
	Bureaucrat vogon2("Vogon2", 42);
	vogon2.upgrade();
	std::cout << vogon2;
	vogon2.downgrade();
	std::cout << vogon2;
	std::cout << std::endl;
	Bureaucrat vogon3("Vogon_senior", 1);
	vogon3.upgrade();
	std::cout << std::endl;
	Bureaucrat vogon4("Vogon_junior", 150);
	vogon4.downgrade();
	std::cout << std::endl;

//	std::cout << "Tests: copy constructor, assignment operator!" << std::endl;
//	Bureaucrat vogon5(vogon);
//	std::cout << vogon5;
//	std::cout << std::endl;

//	Bureaucrat vogon6("Vogon_copy", 21);
//	vogon6 = vogon2;
//	std::cout << vogon6;
//	std::cout << std::endl;

	return 0;
}
