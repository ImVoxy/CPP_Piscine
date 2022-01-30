#include "../includes/B.hpp"

B::B(void)
{
}

B::B(B const &src)
{
	*this = src;
}

B &B::operator=(B const &src)
{
	if (this != &src)
		Base::operator=(src);
	return *this;
}

B::~B()
{
}