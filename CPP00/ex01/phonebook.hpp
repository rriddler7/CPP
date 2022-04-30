/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:14:35 by rriddler          #+#    #+#             */
/*   Updated: 2022/03/22 16:14:45 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>


#include "contact.hpp"

class PhoneBook 
{
private:
	int index;
	Contact	contacts[8];
	int count;
public:
	PhoneBook();
	~PhoneBook();

	int		CastIndex(std::string index);
	void	AddContact(void);
	void	ShowContacts(void);
};

#endif
