#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *_array;

public:
	Array() : _size(0), _array(new T[0])
	{
	}
	Array(unsigned int const &n) : _size(n),  _array(new T[n])
	{
	}
	Array(Array const &src) : _array(NULL)
	{
		this->_size = src.size();
		this->_array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			this->_array[i] = src._array[i];
	}

	Array<T> &operator=(const Array &src)
	{
		if (this != &src)
		{
			delete[] this->_array;
			this->_size = src.size();
			this->_array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				this->_array[i] = src._array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i < 0 || i >= this->size())
			throw Array::OutOfBoundsException();
		return this->_array[i];
	}
	const T&operator[](unsigned int i) const
	{
		if (i < 0 || i >= this->size())
			throw Array::OutOfBoundsException();
		return this->_array[i];
	}
	~Array()
	{
		delete[] this->_array;
	}

	T *getArray() const
	{
		return this->_array;
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
