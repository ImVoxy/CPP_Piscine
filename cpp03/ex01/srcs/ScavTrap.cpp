#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap alpascal was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " was created!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap was copied!" << std::endl;
    *this = src;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " was destroyed!" << std::endl;
}