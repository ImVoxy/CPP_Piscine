#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ScavTrap &operator=(ScavTrap const &src);

	void guardGate();

	virtual ~ScavTrap();
};

#endif