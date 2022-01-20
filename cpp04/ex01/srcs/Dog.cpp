#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " was created" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	this->type = src.type;
	this->brain = new Brain(*(src.brain));
	std::cout << "Dog was copied" << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	this->Animal::operator=(src);
	delete this->brain;
    this->brain = new Brain(*(src.brain));
	return (*this);
}

Brain *Dog::getBrain()
{
	return this->brain;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " was destroyed" << std::endl;
}

