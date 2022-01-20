#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal** animals = new Animal*[6];
	Dog      dog;
	Cat      cat;

	Dog deepdogcopy;
	deepdogcopy = dog;

	Cat catcopy(cat);

	std::cout << "dog is --> " << dog.getType() << std::endl;
	std::cout << "dogcopy is --> " << deepdogcopy.getType() << std::endl;

	std::cout << "cat is --> " << cat.getType() << std::endl;
	std::cout << "catcopy is --> " << catcopy.getType() << std::endl;

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();
	animals[4] = new Dog();
	animals[5] = new Cat();
	for (int i = 0; i < 6; i++) {
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < 6; i++) {
		delete animals[i];
	}
	delete[] animals;
	return 0;
}
