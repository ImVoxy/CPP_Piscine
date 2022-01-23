#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap was copied!" << std::endl;
    *this = src;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " : \"Hey, high five guys !!!\"" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}
