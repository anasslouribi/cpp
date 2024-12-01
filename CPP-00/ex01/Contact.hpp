/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:58:45 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/01 13:21:39 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 

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

#endif