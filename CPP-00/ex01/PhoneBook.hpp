/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:42:51 by alouribi          #+#    #+#             */
/*   Updated: 2024/11/28 14:11:09 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 


class Contact
{
	public:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string phone_n;
		std::string d_secret;
};

class PhoneBook
{
	public:
		Contact cont[8];
};


/*
class Contact {
private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone_n;
    std::string d_secret;

public:
    // Getters
    std::string getFirstName() const { return f_name; }
    std::string getLastName() const { return l_name; }
    std::string getNickname() const { return n_name; }
    std::string getPhoneNumber() const { return phone_n; }
    std::string getDarkestSecret() const { return d_secret; }

    // Setters
    void setFirstName(const std::string& value) { f_name = value; }
    void setLastName(const std::string& value) { l_name = value; }
    void setNickname(const std::string& value) { n_name = value; }
    void setPhoneNumber(const std::string& value) { phone_n = value; }
    void setDarkestSecret(const std::string& value) { d_secret = value; }
};


class PhoneBook {
private:
    Contact cont[8]; // Internal storage for contacts
    int count = 0;   // Number of contacts

public:
    // Add a contact
    void addContact(const Contact& contact) {
        cont[count % 8] = contact;
        count++;
    }

    // Retrieve a contact by index
    Contact getContact(int index) const {
        if (index < 0 || index >= (count < 8 ? count : 8)) {
            throw std::out_of_range("Invalid contact index.");
        }
        return cont[index];
    }

    // Get total contacts (up to 8)
    int getTotalContacts() const {
        return (count < 8) ? count : 8;
    }
};


 */
#endif
