#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Random Animal";
	std::cout << this->type << " was created" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << this->type << " was created" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << src.type << " was copied" << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string const &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "This animal seems to make no sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " was destroyed" << std::endl;
}