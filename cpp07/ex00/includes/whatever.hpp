#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &i, T &j)
{
	T tmp = i;
	i = j;
	j = tmp;
}

template <typename T>
T &min(T &i, T &j)
{
	if (i < j)
		return (i);
	return (j);
}

template <typename T>
T &max(T &i, T &j)
{
	if (i > j)
		return (i);
	return (j);
}

class test
{
private:
	int _value;

public:
	test(int const &_value)
	{
		this->_value = _value;
	}
	test(test const &src)
	{
		*this = src;
	}
	test &operator=(test const &src)
	{
		if (this != &src)
		{
			this->_value = src._value;
		}
		return *this;
	}
	~test()
	{
	}
	bool operator<(test const &src) const
	{
		return (this->_value < src._value);
	}
	bool operator>(test const &src) const
	{
		return (this->_value > src._value);
	}
	int getValue() const
	{
		return this->_value;
	}
};

std::ostream &operator<<(std::ostream &out, test const &test)
{
	out << test.getValue();
	return out;
}

#endif
