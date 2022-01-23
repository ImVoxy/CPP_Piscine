#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);

	ScavTrap &operator=(ScavTrap const &src);

	void guardGate();

	virtual ~ScavTrap();
};

#endif