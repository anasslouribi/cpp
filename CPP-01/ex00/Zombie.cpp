/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:48 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:48 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie::Zombie(const std::string name)
{
	if (name == "")
    {
		std::cout << "GIVE A NAME" << std::endl;
		return;
	}
    this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Finished" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}