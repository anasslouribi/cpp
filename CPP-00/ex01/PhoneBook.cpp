/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:03:58 by alouribi          #+#    #+#             */
/*   Updated: 2024/11/28 18:23:41 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print(std::string line)
{
	if (line.length() > 10)
	{
		std::cout << line.substr(0, 9) << "." << "|";
	}	
	else
	{
		std::cout << std::setw(10) << line  << "|";
	}
}

void print2(PhoneBook rep, int i)
{
	std::cout << "First name: " << rep.cont[i].f_name << std::endl;
	std::cout << "Last name: " << rep.cont[i].l_name << std::endl;
	std::cout << "Nickname: " << rep.cont[i].n_name << std::endl;
	std::cout << "Phone number: " << rep.cont[i].phone_n << std::endl;
	std::cout << "Darkest secret: " << rep.cont[i].d_secret << std::endl;
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
			std::cout << "First name:" << std::endl;
			rep.cont[i].f_name = get_input("First name:");
			std::cout << "Last name:" << std::endl;
			rep.cont[i].l_name = get_input("Last name:");
			std::cout << "Nickname:" << std::endl;
			rep.cont[i].n_name = get_input("Nickname:");
			std::cout << "Phone number:" << std::endl;
			rep.cont[i].phone_n = get_input2("Phone number:");
			std::cout << "Darkest secret:" << std::endl;
			rep.cont[i].d_secret = get_input("Darkest secret:");
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
					std::cout << "|         " << j + 1 << "|";
					print(rep.cont[j].f_name);
					print(rep.cont[j].l_name);
					print(rep.cont[j].n_name);
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
					print2(rep, --index);
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
