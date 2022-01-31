#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;

public:
	Array() : _size(0), array(new T[0])
	{
	}
	Array(unsigned int const &n) : _size(n),  array(new T[n])
	{
	}
	Array(Array const &src) : array(NULL)
	{
		this->_size = src.size();
		this->array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			this->array[i] = src.array[i];
	}

	Array<T> &operator=(const Array &src)
	{
		if (this != &src)
		{
			delete[] this->array;
			this->_size = src.size();
			this->array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				this->array[i] = src.array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i < 0 || i >= this->size())
			throw Array::OutOfBoundsException();
		return this->array[i];
	}
	const T&operator[](unsigned int i) const
	{
		if (i < 0 || i >= this->size())
			throw Array::OutOfBoundsException();
		return this->array[i];
	}
	~Array()
	{
		delete[] this->array;
	}

	T *getArray() const
	{
		return this->array;
	}

	unsigned int size() const
	{
		return this->_size;
	}

	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};
};

#endif
