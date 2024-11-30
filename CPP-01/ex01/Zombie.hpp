#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(const std::string name);
	~Zombie();
    void give_the_name(std::string name);
	void announce();
};

Zombie	*zombieHorde(int n, std::string name);

#endif