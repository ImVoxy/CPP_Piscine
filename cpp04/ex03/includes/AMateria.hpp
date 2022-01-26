#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

protected:
	std::string _type;

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	AMateria &operator=(AMateria const &src);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
	virtual ~AMateria();
};

#endif
