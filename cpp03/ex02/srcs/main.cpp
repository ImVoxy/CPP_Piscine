#include "../includes/FragTrap.hpp"

int main(void)
{
	FragTrap player2("Bob");

	player2.attack("RandomEnemy");
	player2.takeDamage(50);
	player2.beRepaired(3);
	player2.highFivesGuys();
	player2.takeDamage(52);
	player2.attack("RandomEnemy");
	player2.takeDamage(1);
	player2.attack("RandomEnemy");
}