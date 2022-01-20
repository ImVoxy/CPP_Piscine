#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() 
{
	type = "Wrong Cat";
	std::cout << this->type << " was created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) 
{
	std::cout << "WrongCat was copied" << std::endl;
	*this = src;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->WrongAnimal::operator=(copy);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " was destroyed" << std::endl;
}
