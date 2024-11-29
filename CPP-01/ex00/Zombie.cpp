#include "Zombie.hpp"


Zombie::Zombie(const std::string name)
{
	if (name == "") {
		std::cout << "Error. Zombie need a name." << std::endl;
		return;
	}
    this->_name = name;
	announce();
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}