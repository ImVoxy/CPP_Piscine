#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wrong Animal";
	std::cout << this->type << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal was copied" << std::endl;
	*this = src;
	return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.getType();
	return *this;
}

std::string const &WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal doing wrong sounds" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " was destroyed" << std::endl;
}