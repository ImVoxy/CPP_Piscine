#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(Dog const &);
	void makeSound() const;
	Brain *getBrain();
	Dog &operator=(Dog const &);
	virtual ~Dog();
};

#endif
