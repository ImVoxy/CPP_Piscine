#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap player("Player1");

	player.attack("RandomEnemy");
	player.takeDamage(100);
	player.beRepaired(3);
	player.highFivesGuys();
	player.guardGate();
	player.whoAmI();
}
