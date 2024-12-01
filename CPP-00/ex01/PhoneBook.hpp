/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:42:51 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/01 16:43:35 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact cont[8];

    public:
        void addContact(const Contact& contact, int i)
        {
            cont[i] = contact;
        }
        Contact getContact(int index) const
        {
            if (index < 0 || index >= 8)
            {
                throw std::out_of_range("Invalid contact index.");
            }
            return cont[index];
        }
};

#endif
