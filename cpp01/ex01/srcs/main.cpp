#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(10, "test");
	delete[] zombies;
	return (0);
}