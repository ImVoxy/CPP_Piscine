#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &);
	void makeSound() const;
	Brain *getBrain();
	Cat &operator=(Cat const &);
	virtual ~Cat();
};

#endif
