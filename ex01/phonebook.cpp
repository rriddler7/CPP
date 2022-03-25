/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:13:21 by rriddler          #+#    #+#             */
/*   Updated: 2022/03/22 16:13:31 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : index(0), count(0)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int		PhoneBook::CastIndex(std::string index)
{
	const char	symbol = index[0];
	int			casted = 0;

	casted = std::isdigit(symbol);
	if (casted == 0 && symbol != '0')
		return (-1);
	casted = symbol - 48;
	return (casted);
}

void	PhoneBook::AddContact(void)
{
	if (index > 7)
		index = 0;
	contacts[index].CreateContact();
	index++;
	// std::cout << "index " << index << std::endl;
	if (count < 8)
		count++;
	// std::cout << "count " << count << std::endl;	
}

void	PhoneBook::ShowContacts(void)
{
	int	casted;
	std::string index;
	int	i = 0;

	std::cout << std::setw(27) << "Contact list" << std::endl;
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << std::endl;
	while (i < count)
	{
		// std::cout << "i index " << i << std::endl;
		// std::cout << "2count " << count << std::endl;
		std::cout << std::setw(10) << i;
    	std::cout << "|";
		contacts[i].ShowContactList();
		i++;
	}
	if (count > 0)
	{
		std::cout << "Enter index: ";
		std::getline(std::cin, index);
		casted = CastIndex(index);
		// std::cout << "casted " << casted << std::endl;	
		if (casted < 0 || casted >= count)
			std::cout << "Incorrect index!" << std::endl;
		else
			contacts[casted].ShowContact();
	}
}
