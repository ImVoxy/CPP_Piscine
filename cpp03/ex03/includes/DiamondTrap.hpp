#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(std::string const &name);

	DiamondTrap(DiamondTrap const &src);
	DiamondTrap &operator=(DiamondTrap const &src);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void whoAmI();

	virtual ~DiamondTrap();
};

#endif
