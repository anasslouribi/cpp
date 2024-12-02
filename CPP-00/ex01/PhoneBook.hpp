/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:42:51 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/02 15:22:45 by alouribi         ###   ########.fr       */
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
        void addContact(Contact contact, int i);
        Contact getContact(int index);
};

#endif
