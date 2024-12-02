/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:58:45 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/02 16:15:12 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string phone_n;
        std::string d_secret;

    public:

        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
    
        void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickname(std::string value);
        void setPhoneNumber(std::string value);
        void setDarkestSecret(std::string value);
};

#endif