#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap alpascal was created!" << std::endl;
	this->_name = "alpascal";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "ClapTrap " << name << " was created!" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap " << src._name << " was copied!" << std::endl;
	*this = src;
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, no energy left..." << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, no hp left..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " 
				  << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
				  this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, no energy left..." << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, no hp left..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired from " << amount << " hit points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " was destroyed!" << std::endl;
}