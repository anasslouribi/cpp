/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:58:48 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/02 15:11:50 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string Contact::getFirstName()
{
    return f_name;
}
std::string Contact::getLastName()
{
    return l_name;
}
std::string Contact::getNickname()
{
    return n_name;
}
std::string Contact::getPhoneNumber()
{
    return phone_n;
}
std::string Contact::getDarkestSecret()
{
    return d_secret;
}

void Contact::setFirstName(std::string value)
{
    f_name = value; 
}
void Contact::setLastName(std::string value) 
{ 
    l_name = value;
}
void Contact::setNickname(std::string value)
{
    n_name = value;
}
void Contact::setPhoneNumber(std::string value) 
{ 
    phone_n = value; 
}

void Contact::setDarkestSecret(std::string value) 
{ 
    d_secret = value; 
}

void PhoneBook::addContact(Contact contact, int i)
{
    cont[i] = contact;
}

Contact PhoneBook::getContact(int index)
{
    if (index < 0 || index >= 8)
    {
        std::cout << "No contact with this index";
    }
    return cont[index];
}