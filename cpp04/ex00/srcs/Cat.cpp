
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << this->type << " was created" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat was copied" << std::endl;
	*this = src;
	return;
}

Cat &Cat::operator=(Cat const &src)
{
	this->Animal::operator=(src);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " was destroyed" << std::endl;
}
