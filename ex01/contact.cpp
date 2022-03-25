/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:31:53 by rriddler          #+#    #+#             */
/*   Updated: 2022/03/22 16:31:58 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::CreateContact(void)
{
	std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
    std::getline(std::cin, nickName);
	std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkSecret);
    return;
}

void	Contact::ShowField(std::string field)
{
	if (field.length() > 10)
    {
        std::cout << std::setw(9) << field.substr(0, 9);
        std::cout << ".";
    }
	else
		std::cout << std::setw(10) << field;
	return; 
}

void	Contact::ShowContactList(void)
{
	ShowField(firstName);
    std::cout << "|";
	ShowField(lastName);
    std::cout << "|";
	ShowField(nickName);
	std::cout << std::endl;
	return;
}

void    Contact::ShowContact(void)
{
    std::cout << std::left << std::setw(18) << "First name: " << firstName << std::endl;
    std::cout << std::left << std::setw(18) << "Last name: " << lastName << std::endl;
    std::cout << std::left << std::setw(18) << "Nickname: " << nickName << std::endl;
    std::cout << std::left << std::setw(18) << "Phone number: " << phoneNumber << std::endl;
    std::cout << std::left << std::setw(18) << "Darkest secret: " << darkSecret << std::endl;
}
