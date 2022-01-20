
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << this->type << " was created" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog was copied" << std::endl;
	*this = src;
	return;
}

Dog &Dog::operator=(Dog const &src)
{
	this->Animal::operator=(src);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " was destroyed" << std::endl;
}
