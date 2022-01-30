#include "../includes/C.hpp"

C::C(void)
{
}

C::C(C const &src)
{
	*this = src;
}

C &C::operator=(C const &src)
{
	if (this != &src)
		Base::operator=(src);
	return *this;
}

C::~C()
{
}