#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->type << " was created" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat was copied" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*(src.brain));
	return;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	this->Animal::operator=(src);
	delete this->brain;
    this->brain = new Brain(*(src.brain));
	return (*this);
}

Brain *Cat::getBrain()
{
	return this->brain;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " was destroyed" << std::endl;
}
