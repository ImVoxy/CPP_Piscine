#include "../includes/Base.hpp"

Base::Base(void)
{
}

Base::Base(Base const &src)
{
	*this = src;
}

Base &Base::operator=(Base const &src)
{
	if (this != &src)
	{
	}
	return *this;
}

Base::~Base()
{
}