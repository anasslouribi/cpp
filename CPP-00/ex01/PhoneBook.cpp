/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:03:58 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/01 16:46:45 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void agust_line(std::string line)
{
	for (int i = 10 - line.length(); i > 0; i--)
		std::cout << " ";
}
void print(std::string line)
{
	if (line.length() > 10)
	{
		std::cout << line.substr(0, 9) << "." << "|";
	}	
	else
	{
		agust_line(line);
		std::cout << line  << "|";
	}
}

void print2(Contact cont)
{
	std::cout << "First name: " << cont.getFirstName() << std::endl;
	std::cout << "Last name: " << cont.getLastName() << std::endl;
	std::cout << "Nickname: " << cont.getNickname() << std::endl;
	std::cout << "Phone number: " << cont.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << cont.getDarkestSecret() << std::endl;
}

bool ft_isspace(std::string str)
{
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		if (!std::isspace(*i))
            return false;
	}
	return true;
}

bool ft_isdigit(std::string str)
{
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		if (!std::isdigit(*i))
            return false;
	}
	return true;
}


std:: string get_input(std::string name)
{
	std::cout << "-->";
	std::string line;
	std::getline(std::cin, line);
	while (line.empty() || ft_isspace(line))
	{
		std::cout << "Please enter a valid " << name << std::endl;
		std::cout << "-->";
		std::getline(std::cin, line);
	}
	return (line);
}

std:: string get_input2(std::string name)
{
	std::cout << "-->";
	std::string line;
	std::getline(std::cin, line);
	while (line.empty() || !ft_isdigit(line))
	{	
		std::cout << "Please enter a valid " << name << std::endl;
		std::cout << "-->";
		std::getline(std::cin, line);
	}
	return (line);
}

int main()
{
	std::string line;
	std::string tmp;
	PhoneBook rep;
	Contact cont;
	static int i;
	int lenght = 0;

	while (1)
	{
		system("clear");
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
		std::cout << "===>";
		std::getline(std::cin, line);
		if (std::cin.eof() == 1 || std::cin.fail())
		{
			
			std::cout << "Can't read from the input" << std::endl;
			exit(1);
		}
		if (line == "ADD")
		{
			cont = rep.getContact(i);
			std::cout << "First name:" << std::endl;
			cont.setFirstName(get_input("First name:"));
			std::cout << "Last name:" << std::endl;
			cont.setLastName(get_input("Last name:"));
			std::cout << "Nickname:" << std::endl;
			cont.setNickname(get_input("Nickname:"));
			std::cout << "Phone number:" << std::endl;
			cont.setPhoneNumber(get_input2("Phone number:"));
			std::cout << "Darkest secret:" << std::endl;
			cont.setDarkestSecret(get_input("Darkest secret:"));
			rep.addContact(cont, i);
			if (lenght != 8)
				lenght = ++i;
			if (i == 8)
				i = 0;
		}
		else if (line == "SEARCH")
		{
			if (lenght == 0)
			{
				std::cout << "There are no contacts to show" << std::endl;
				std::cout << "Press enter to continue..." << std::endl;
				std::cin.get();
			}
			else
			{
				std::cout << "|     index|first name| last name|  nickname|" << std::endl;
				for (int j = 0; j < lenght; j++)
				{
					cont = rep.getContact(j);
					std::cout << "|         " << j + 1 << "|";
					print(cont.getFirstName());
					print(cont.getLastName());
					print(cont.getNickname());
					std::cout << std::endl;
				}
				std::string ind;
				int index;
				std::cout << "-->";
				std::getline(std::cin, ind);
				std::cout << std::endl;
				std::istringstream iss(ind);
    			if (!(iss >> index) || index > lenght || index < 0) 
				{
					system("clear");
      			 	std::cout << "There is no contact with this index" << std::endl;
      			 	std::cout << "Press enter to continue..." << std::endl;
					std::cin.get();
   				}    
				else
				{
					system("clear");
					print2(rep.getContact(--index));
      			 	std::cout << std::endl << "Press enter to continue..." << std::endl;
					std::cin.get();
				}
			}
		}
		else if (line == "EXIT")
			exit(0);
	}
    return (0);
}
