#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default was created!" << std::endl;
	this->_name = "default";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}
DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),
						ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap " << name << " was created!" << std::endl;
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

void DiamondTrap::attack(std::string const &target)
{
	std::cout << "DiamondTrap -> ";
	this->ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap -> ";
	this->ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap -> ";
	this->ClapTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello, my name is " << this->_name << 
			" and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed!" << std::endl;
}
