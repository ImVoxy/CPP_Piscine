#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[4];

	Character(){};

public:
	Character(std::string const &name);
	Character(Character const &src);
	Character &operator=(Character const &src);
	std::string const &getName() const;
	AMateria const *getMateria(int index) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	~Character();
};

#endif
