#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);

	FragTrap &operator=(FragTrap const &src);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys();

	virtual ~FragTrap();
};

#endif