#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);

	FragTrap &operator=(FragTrap const &src);

	void highFivesGuys();

	virtual ~FragTrap();
};

#endif