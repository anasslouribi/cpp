#include "Zombie.hpp"

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
	std::cout << this->name << " Dies" << std::endl;
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
