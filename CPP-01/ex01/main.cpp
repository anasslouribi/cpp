#include "Zombie.hpp"

int main()
{
    int N = 5;
	Zombie *ptr = NULL;
	ptr = zombieHorde(N, "test");
	if (ptr == NULL)
		return 1;
	for (int i = 0; i < N; i++)
    {
		ptr[i].announce();
	}
	delete[] ptr;
	return 0;
}
