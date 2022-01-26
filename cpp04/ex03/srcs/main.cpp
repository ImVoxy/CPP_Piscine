#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;


	//more tests than the ones given in subject
	std::cout << std::endl;

	AMateria *tmp2;


	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	me = new Character("me");

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	AMateria* copiedMateria = tmp2->clone(); //tmp is curently "cure"
	me->equip(tmp2);

	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	std::cout << "--unequiped" << std::endl;
	me->use(1, *bob);
	std::cout << "--" << std::endl;
	me->equip(tmp2);
	me->use(1, *bob);
	me->unequip(1);
	me->unequip(0);
	me->equip(tmp);
	me->equip(tmp2);
	// me->use(0, *bob);
	// me->use(1, *bob);
	std::cout << "----------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "materia[" << i << "]" << std::endl;
		me->use(i, *bob);
	}
	

	std::cout << "----------------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(copiedMateria);
	for (int i = 0; i < 4; i++)
	{
		std::cout << "materia[" << i << "]" << std::endl;
		me->use(i, *bob);
	}


	std::cout << "DEEPCOPY-----------" << std::endl;
	ICharacter *deepcopy = me;
		for (int i = 0; i < 4; i++)
	{
		std::cout << "materia[" << i << "]" << std::endl;
		deepcopy->use(i, *bob);
	}
	std::cout << "----------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	

	return 0;
}
