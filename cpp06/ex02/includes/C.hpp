#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
private:
public:
	C();
	C(C const &src);
	C &operator=(C const &src);
	~C();
};

#endif
