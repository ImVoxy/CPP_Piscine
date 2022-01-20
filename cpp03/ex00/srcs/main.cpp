#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap player("Player1");

	player.attack("RandomEnemy");
	player.takeDamage(42);
	player.beRepaired(21);
}