#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	stackZombie("Stack");
	stackZombie.announce();
	Zombie	*heapZombie = newZombie("Heap");
	heapZombie->announce();

	randomChump("RandomChump");
	delete heapZombie;
	return (0);
}