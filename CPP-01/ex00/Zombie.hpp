/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:45 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:45 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(const std::string _name);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif