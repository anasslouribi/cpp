#include "Zombie.hpp"

int main()
{
	randomChump("test1");

	Zombie *someone = newZombie("test2");
	
	std::cout << "Using allocated zombie in main..." << std::endl;
	someone->announce();
	
	std::cout << "Deleting allocated zombie..." << std::endl;
	delete someone;
	return 0;
}