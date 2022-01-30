#ifndef BASE_HPP
#define BASE_HPP

class Base
{
private:
public:
	Base();
	Base(Base const &src);
	Base &operator=(Base const &src);
	virtual ~Base();
};

#endif
