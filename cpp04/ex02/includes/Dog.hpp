#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal
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
