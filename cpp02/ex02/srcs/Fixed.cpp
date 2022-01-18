#include "../includes/Fixed.hpp"

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed::Fixed(void)
{
	this->_val = 0;
}

Fixed::Fixed(int _val)
{
	this->_val = _val << this->_fractionalBitsNb;
}

Fixed::Fixed(float _val)
{
	this->_val = (int)roundf(_val * (1 << this->_fractionalBitsNb));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->_val = src._val;
	return (*this);
}

bool Fixed::operator<(const Fixed &rhs)
{
	bool ret = this->_val < rhs._val; 
	return (ret);
}
bool Fixed::operator>(const Fixed &rhs)
{
	bool ret = this->_val > rhs._val;
	return (ret);
}
bool Fixed::operator<=(const Fixed &rhs)
{
	bool ret = this->_val <= rhs._val;
	return (ret);
}
bool Fixed::operator>=(const Fixed &rhs)
{
	bool ret = this->_val >= rhs._val;
	return (ret);
}
bool Fixed::operator==(const Fixed &rhs)
{
	bool ret = this->_val == rhs._val;
	return (ret);
}
bool Fixed::operator!=(const Fixed &rhs)
{
	bool ret = this->_val != rhs._val;
	return (ret);
}

Fixed Fixed::operator+(const Fixed &b)
{
	Fixed res;

	res.setRawBits(this->_val + b._val);
	return (res);
}
Fixed Fixed::operator-(const Fixed &b)
{
	Fixed res;

	res.setRawBits(this->_val - b._val);
	return (res);
}
Fixed Fixed::operator*(const Fixed &b)
{
	Fixed res;

	res.setRawBits(this->_val * b._val / (1 << this->_fractionalBitsNb));
	return (res);
}
Fixed Fixed::operator/(const Fixed &b)
{
	Fixed res;

	res.setRawBits(this->_val / b._val * (1 << this->_fractionalBitsNb));
	return (res);
}

Fixed &Fixed::operator++(void)
{
	this->_val += 1;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	this->_val -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->_val += 1;
	return (temp);
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->_val -= 1;
	return (temp);
}

std::ostream &operator<<(std::ostream &output, const Fixed &val)
{
	output << val.toFloat();
	return (output);
}

int Fixed::toInt(void) const
{
	return (this->_val >> this->_fractionalBitsNb);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_val / (1 << this->_fractionalBitsNb));
}

int Fixed::getRawBits(void) const
{
	return (this->_val);
}

void Fixed::setRawBits(int raw)
{
	this->_val = raw;
}

Fixed::~Fixed(void)
{
}