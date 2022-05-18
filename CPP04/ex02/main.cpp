#include "Dog.hpp"
#include "Cat.hpp"

void abstract_tests()
{
	const Animal* j = new Animal();
//	Animal i;

	delete j;
}

void subject_tests()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; // should not create a leak
	delete i;
}

void array_tests()
{
	Animal *animals[6];
	int i;

	for (i = 0; i < 3; i++)
	{
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (i = 3; i < 6; i++)
	{
		animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (i = 0; i < 6; i++)
	{
		delete animals[i];
		if (i != 5)
			std::cout << std::endl;
	}
}

void copy_constructor_tests()
{
	const Dog *Hachiko = new Dog;
	std::cout << std::endl;

	Hachiko->expressIdeas(7);
	std::cout << std::endl;
	Hachiko->setIdeas(7, "mmm, meat :)");
	Hachiko->expressIdeas(7);
	Hachiko->expressIdeas(13);
	std::cout << std::endl;

	const Dog *Belka = new Dog(*Hachiko);
	std::cout << std::endl;
	Belka->expressIdeas(7);
	Belka->expressIdeas(13);
	std::cout << std::endl;

	delete Hachiko;
	std::cout << std::endl;
	delete Belka;
}

void assign_operator_tests()
{
	Cat *Tom = new Cat;
	std::cout << std::endl;
	Cat *Matroskin = new Cat;
	std::cout << std::endl;
	Tom->expressIdeas(99);
	Matroskin->expressIdeas(99);
	std::cout << std::endl;
	Tom->setIdeas(99, "mmm, milk :)");
	Tom->expressIdeas(99);
	Tom->expressIdeas(0);
	std::cout << std::endl;
	*Matroskin = *Tom;
	std::cout << std::endl;
	Tom->setIdeas(99, "mmm, fish :)");
	Tom->expressIdeas(99);
	std::cout << std::endl;
	Matroskin->expressIdeas(99);
	Matroskin->expressIdeas(0);
	std::cout << std::endl;
	delete Tom;
	std::cout << std::endl;
	delete Matroskin;
}

void	other_tests()
{
	Cat Tom;
	std::cout << std::endl;
	Cat Matroskin;
	std::cout << std::endl;
	Tom.expressIdeas(99);
//	Matroskin.expressIdeas(99);
	std::cout << std::endl;
	Tom.setIdeas(99, "mmm, milk :)");
	Tom.expressIdeas(99);
	Tom.expressIdeas(0);
	std::cout << std::endl;
//	std::cout << "Tests of copy constructor2" << std::endl;
//	Cat Matroskin = Tom;
	std::cout << "Tests of copy assignment operator2" << std::endl;
	Matroskin = Tom;
	std::cout << std::endl;
	Tom.setIdeas(99, "mmm, fish :)");
	Tom.expressIdeas(99);
	std::cout << std::endl;
	Matroskin.expressIdeas(99);
	Matroskin.expressIdeas(0);
	std::cout << std::endl;
}

int	main()
{
//	std::cout << "Tests of subject" << std::endl;
//	std::cout << std::endl;
//	subject_tests();
//	std::cout << std::endl;
//	std::cout << "Tests of array" << std::endl;
//	std::cout << std::endl;
//	array_tests();
//	std::cout << std::endl;
//	std::cout << "Tests of copy constructor" << std::endl;
//	std::cout << std::endl;
//	copy_constructor_tests();
//	std::cout << std::endl;
//	std::cout << "Tests of copy assignment operator" << std::endl;
//	std::cout << std::endl;
//	assign_operator_tests();
//	std::cout << std::endl;
//	std::cout << "Other tests" << std::endl;
//	std::cout << std::endl;
//	other_tests();
//	std::cout << std::endl;
	abstract_tests();

	return 0;
}
