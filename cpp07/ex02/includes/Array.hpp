#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;

public:
	Array()
	{
		_size = 0;
		array = new T[0];
	}
	Array(unsigned int n)
	{
		array = new T[n];
		_size = n;
	}
	Array(const Array &src)
	{
		this->array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			this->array[i] = src[i];
	}
	Array<T> &operator=(const Array &src)
	{
		if (this != &src)
		{
			this->~Array();
			this->_size = src.size();
			this->array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				this->array[i] = src[i];
		}
		return *this;
	}
	T operator[](int i) const
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
			throw Array::OutOfBoundsException();
		return this->array[i];
	}
	T &operator[](int i)
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
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
