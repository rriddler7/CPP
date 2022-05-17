#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	}
	{
		std::cout << "Tests with wrong animal" << std::endl;
		const WrongAnimal* wrmeta = new WrongAnimal();
		const WrongAnimal* wri = new WrongCat();
		std::cout << wri->getType() << " " << std::endl;
		wri->makeSound();
		wrmeta->makeSound();

		WrongCat *wrcat = new WrongCat();
		std::cout << wrcat->getType() << " " << std::endl;
		wrcat->makeSound();

//		WrongCat wrcat;
//		std::cout << wrcat.getType() << " " << std::endl;
//		wrcat.makeSound();

		delete wrcat;
		delete wri;
		delete wrmeta;
	}
	return 0;
}
