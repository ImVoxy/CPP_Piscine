#include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Int and Float Constructors

Fixed::Fixed(int val)
{
	std::cout << "Int constuctor called" << std::endl;
	this->_val = val << this->_fractionalBitsNb;
}

Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (int)roundf(val * (1 << this->_fractionalBitsNb));
}

//

//	Convertions

int Fixed::toInt(void) const
{
	int ret = this->_val >> this->_fractionalBitsNb;

	return (ret);
}

float Fixed::toFloat(void) const
{
	float ret = (float)this->_val / (1 << this->_fractionalBitsNb);
	return (ret);
}

//

int Fixed::getRawBits(void) const
{
	return (this->_val);
}

void Fixed::setRawBits(int rawval)
{
	this->_val = rawval;
}

// Operator overload

std::ostream &operator<<(std::ostream &output, const Fixed &val)
{
	output << val.toFloat();
	return (output);
}

//

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
   		this->_val = src.getRawBits();
	return (*this);
}
