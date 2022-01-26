#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(Cure const &src);
	Cure &operator=(Cure const &src);
	AMateria *clone() const;
	void use(ICharacter &target);
	~Cure();
};

#endif
