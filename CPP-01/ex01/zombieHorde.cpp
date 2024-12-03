/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:00:18 by alouribi          #+#    #+#             */
/*   Updated: 2024/12/03 18:00:18 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *ptr = NULL;
	if (n < 1)
		return NULL;
	ptr = new Zombie[n];
	if (ptr == NULL)
    {
		return NULL;
	}
	for (int i = 0; i < n; i++)
    {
		ptr[i].give_the_name(name);
	}
	return ptr;
}