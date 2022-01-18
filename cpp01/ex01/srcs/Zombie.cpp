#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " : \" BraiiiiiiinnnzzzZ... \"" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Destroyed" << std::endl;
}