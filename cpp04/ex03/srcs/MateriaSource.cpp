#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; ++i)
	{
		AMateria const *tmp = src.getMateria(i);
		if (tmp != NULL)
			this->_materia[i] = tmp->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; ++i)
		{
			AMateria const *tmp = src.getMateria(i);
			if (tmp != NULL)
				this->_materia[i] = tmp->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

AMateria *MateriaSource::getMateria(int index) const
{
	return (this->_materia[index]);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}
