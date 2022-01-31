#ifndef ITER_HPP
#define ITER_HPP

class test
{
private:
	int _value;

public:
	test(int const &_value)
	{
		this->_value = _value;
	};
	test(test const &src)
	{
		*this = src;
	}
	test &operator=(test const &src)
	{
		if (this != &src)
			this->_value = src._value;
		return *this;
	}
	~test()
	{
	}

	int getValue() const
	{
		return this->_value;
	};
};

std::ostream &operator<<(std::ostream &out, test const &test)
{
	out << test.getValue();
	return out;
}

template <typename T>
void iter(T *args, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(args[i]);
}

template <typename T>
void template_printer(T& src)
{
	std::cout << "(template fct : )" << src << std::endl;
}

#endif
