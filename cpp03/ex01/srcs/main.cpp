#include "../includes/ScavTrap.hpp"

int main(void)
{
	ScavTrap player2("Bob");

	player2.attack("RandomEnemy");
	player2.takeDamage(50);
	player2.beRepaired(3);
	player2.guardGate();
	player2.takeDamage(52);
	player2.attack("RandomEnemy");
	player2.takeDamage(1);
	player2.attack("RandomEnemy");
}