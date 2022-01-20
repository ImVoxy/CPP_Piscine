#include "../includes/ScavTrap.hpp"

int main(void)
{
	ClapTrap player1("Jim");
	ScavTrap player2("Bob");

	player1.attack("RandomEnemy");
	player1.takeDamage(42);
	player1.beRepaired(21);
	player2.attack("RandomEnemy");
	player2.takeDamage(100);
	player2.beRepaired(3);
	player2.guardGate();
}