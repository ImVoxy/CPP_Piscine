#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap player("Player1");

	player.attack("RandomEnemy");
	player.takeDamage(8);
	player.beRepaired(21);

	for (int i = 8; i >= 0; i--)
		player.attack("RandomEnemy");

	player.beRepaired(21);
}