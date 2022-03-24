/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:32:10 by rriddler          #+#    #+#             */
/*   Updated: 2022/03/22 16:32:23 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string	firstName;
    std::string	lastName;
    std::string	nickName;
    std::string	phoneNumber;
    std::string	darkSecret;
	
public:
	Contact(void);
	~Contact(void);

    void	CreateContact(void);
    void	ShowField(std::string field);
	void	ShowContactList(void);
    void    ShowContact(void);
};

#endif
