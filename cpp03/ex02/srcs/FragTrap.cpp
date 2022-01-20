#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap alpascal was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap -> ";
	this->ClapTrap::attack(target);
}
void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap -> ";
	this->ClapTrap::takeDamage(amount);
}
void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap -> ";
	this->ClapTrap::beRepaired(amount);
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
