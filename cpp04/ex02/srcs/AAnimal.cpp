#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Random Animal";
	std::cout << this->type << " was created" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << this->type << " was created" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << src.type << " was copied" << std::endl;
	return;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
	this->type = src.getType();
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "This Animal seems to make no sound" << std::endl;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal was destroyed" << std::endl;
}