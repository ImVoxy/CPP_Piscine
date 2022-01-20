#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &);
	Animal &operator=(Animal const &);
	std::string getType(void) const;
	virtual void makeSound() const = 0;
	virtual ~Animal();
};

#endif
