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

#endif
