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
	std::cout << this->_name << ": Dies" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}