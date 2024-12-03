/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:25 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:25 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string name);
	~Zombie();
    void give_the_name(std::string name);
	void announce();
};

Zombie	*zombieHorde(int n, std::string name);

#endif