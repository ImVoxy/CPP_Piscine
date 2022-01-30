#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
    	p = dynamic_cast<A&>(p);
    	std::cout << "A" << std::endl;
    	return;
  	} 
	catch (std::exception& e)
	{
	}
	try
	{
    	p = dynamic_cast<B&>(p);
    	std::cout << "B" << std::endl;
    	return;
  	} 
  	catch (std::exception& e)
	{
	}
	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
    	return;
	}
	catch (std::exception& e)
	{
	}
  	return;
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *test = generate();
		//from ref
		identify(*test);
		//from ptr
		identify(test);
		delete test;
	}
	return 0;
}
