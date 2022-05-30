#include <iostream>

struct Data
{
	std::string	name;
	std::string	sex;
	int			age;
};

uintptr_t serialize(Data *ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

void	printData(Data data)
{
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Sex: " << data.sex << std::endl;
	std::cout << "Age: " << data.age << std::endl;
}

int main()
{
	{
		Data person;
		uintptr_t raw;
		Data *ptr;

		person.name = "Roro";
		person.sex = "female";
		person.age = 25;
		printData(person);
		std::cout << std::endl;

		raw = serialize(&person);
		std::cout << raw << std::endl;
		std::cout << std::endl;

		ptr = deserialize(raw);
		printData(*ptr);
		std::cout << std::endl;
	}
	{
		Data *person = new Data;
		uintptr_t raw;
		Data *ptr;

		person->name = "Riddler";
		person->sex = "male";
		person->age = 30;
		printData(*person);
		std::cout << std::endl;

		raw = serialize(person);
		std::cout << raw << std::endl;
		std::cout << std::endl;

		ptr = deserialize(raw);
		printData(*ptr);

		delete person;
	}
}