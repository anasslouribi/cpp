#include "Zombie.hpp"

int main()
{
	randomChump("test1");

	Zombie *someone = newZombie("test2");
	
	someone->announce();
	
	delete someone;
	return 0;
}