/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:29 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:29 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() : name("")
{}

Zombie::Zombie(const std::string name)
{
	if (name == "")
    {
		std::cout << "GIVE A NAME" << std::endl;
		return;
	}
    this->name = name;
	announce();
}
Zombie::~Zombie()
{
	std::cout << this->name << " Finished" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::give_the_name(std::string name)
{
	if (name == "")
		return;
    this->name = name;
}
