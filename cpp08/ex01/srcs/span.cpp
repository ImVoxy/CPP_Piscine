#include "../includes/span.hpp"

Span::Span() : _size(0)
{
}

Span::Span(unsigned int n) : _size(n)
{
}

Span::Span(Span const &src) : _size(src.getSize()), _cont(src.getValues())
{
}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_size = src.getSize();
		this->_cont = src.getValues();
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->_cont.size() >= this->_size)
		throw Span::FullException();
	else
		this->_cont.push_back(n);
}

void Span::addMoreNumbers(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end)
{
	int size = std::distance(start, end);
	if (size > static_cast<int>(this->_size))
		throw Span::FullException();
	else
		this->_cont.insert(_cont.end(), start, end);
}

int Span::shortestSpan() const
{
	if (this->_cont.size() < 2)
		throw Span::NoDistanceException();
	std::vector<int> cpy = this->_cont;
	std::sort(cpy.begin(), cpy.end());
	std::vector<int>::iterator it1 = cpy.begin();
	std::vector<int>::iterator it2 = ++cpy.begin();
	int ret = *it2 - *it1;
	while (it2 != cpy.end())
	{
		if (*it2 - *it1 < ret)
			ret = *it2 - *it1;
		it1 = it2;
		it2++;
	}
	return ret;
}

int Span::longestSpan() const
{
	if (this->_cont.size() < 2)
		throw Span::NoDistanceException();
	return (*std::max_element(this->_cont.begin(), this->_cont.end()) - *std::min_element(this->_cont.begin(), this->_cont.end()));
}

unsigned int Span::getSize() const
{
	return this->_size;
}

std::vector<int> const &Span::getValues() const
{
	return this->_cont;
}