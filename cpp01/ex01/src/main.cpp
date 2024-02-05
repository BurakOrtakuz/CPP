#include "../include/Zombie.hpp"


int main(void)
{
	Zombie *zombie1 = zombieHorde(5, "Zombie1");
	for (int i = 0; i < 5; i++)
	{
		zombie1[i].announce();
	}

	delete [] zombie1;
}