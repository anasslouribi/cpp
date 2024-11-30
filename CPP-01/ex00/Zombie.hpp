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