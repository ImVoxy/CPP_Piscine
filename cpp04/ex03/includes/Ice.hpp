#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(Ice const &src);
	Ice &operator=(Ice const &src);
	AMateria *clone() const;
	void use(ICharacter &target);
	~Ice();
};

#endif
