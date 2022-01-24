#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
private:
protected:
	std::string type;
	AAnimal();
	AAnimal(std::string type);

public:
	AAnimal(AAnimal const &);
	AAnimal &operator=(AAnimal const &);
	std::string getType(void) const;
	virtual void makeSound() const = 0;
	virtual ~AAnimal();
};

#endif
