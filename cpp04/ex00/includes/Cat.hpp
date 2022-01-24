#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
public:
	Cat();
	Cat(Cat const &);
	Cat &operator=(Cat const &);

	void makeSound() const;

	virtual ~Cat();
};

#endif
