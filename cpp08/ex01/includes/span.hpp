#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _cont;
	Span();

public:
	Span(unsigned int n);
	Span(Span const &src);
	Span &operator=(Span const &src);
	int &operator[](int i);
	~Span();
	void addNumber(int n);
	void addMoreNumbers(std::vector<int>::iterator const &, std::vector<int>::iterator const &);
	int shortestSpan() const;
	int longestSpan() const;
	unsigned int getSize() const;
	std::vector<int> const &getValues() const;
	class FullException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Buffer is already full");
		}
	};
	class NoDistanceException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Buffer is either empty or single element");
		}
	};
};

#endif
