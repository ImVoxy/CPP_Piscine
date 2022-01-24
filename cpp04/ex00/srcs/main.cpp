#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *wrong = new WrongCat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << meta->getType() << std::endl;
	std::cout << wrong->getType() << std::endl;
	meta->makeSound();
	wrong->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wrong;
	return (0);
}
