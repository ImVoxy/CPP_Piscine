#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
}

Character::Character(Character const &src)
{
	this->_name = src.getName();
	for (int i = 0; i < 4; ++i)
	{
		AMateria const *tmp = src.getMateria(i);
		if (tmp != NULL)
			this->_materia[i] = tmp->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character &Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->~Character();
		this->_name = src.getName();
		for (int i = 0; i < 4; ++i)
		{
			AMateria const *tmp = src.getMateria(i);
			if (tmp != NULL)
				this->_materia[i] = tmp->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria const *Character::getMateria(int index) const
{
	return (this->_materia[index]);
}

void Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return;
		}
		else if (i == 3)
			std::cout << "Can't equip more materia" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		return;
	}
	if (this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}
