# ifndef HUMANB_HPP 
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;

	HumanB();

public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif