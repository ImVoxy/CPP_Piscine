#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
public:
	Dog();
	Dog(Dog const &);
	Dog &operator=(Dog const &);
	virtual ~Dog();

	void makeSound() const;
};

#endif
