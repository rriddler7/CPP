#include "phonebook.hpp"

int	main(void)
{
	std::string	command;

	PhoneBook phonebook;
	while (1)
	{
		std::cout << "Insert command: ";
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			phonebook.AddContact();
		else if (!command.compare("SEARCH"))
			phonebook.ShowContacts();
		else if (!command.compare("EXIT"))
			break ;
		else
			std::cout << "Wrong command!" << std::endl;
	}
	return (0);
}
