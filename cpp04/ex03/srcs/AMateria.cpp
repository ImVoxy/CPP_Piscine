#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	this->_type = src._type;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}


void AMateria::use(ICharacter &)
{
}


AMateria::~AMateria()
{
}