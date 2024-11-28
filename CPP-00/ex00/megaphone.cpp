/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouribi <alouribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:18:50 by alouribi          #+#    #+#             */
/*   Updated: 2024/11/28 17:00:01 by alouribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string line;
		for (int i = 1; i < ac; i++)
		{
			line = av[i];
			for (unsigned long j = 0; j < line.length(); j++)
			{
				std::cout << (char)toupper(line[j]);
			}
		}
	}
    return (0);
}
