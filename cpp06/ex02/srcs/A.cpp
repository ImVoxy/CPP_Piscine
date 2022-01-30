#include "../includes/A.hpp"

A::A(void)
{
}

A::A(A const &src)
{
	*this = src;
}

A &A::operator=(A const &src)
{
	if (this != &src)
		Base::operator=(src);
	return *this;
}

A::~A()
{
}