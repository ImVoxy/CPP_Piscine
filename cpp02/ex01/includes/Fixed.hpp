#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _val;
	static const int _fractionalBitsNb = 8;

public:
	Fixed(void);
	Fixed(int val);
	Fixed(float val);

	Fixed(const Fixed &src);

	Fixed &operator=(const Fixed &src);

	int toInt(void) const;
	float toFloat(void) const;

	int getRawBits(void) const;
	void setRawBits(const int rawval);

	~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &val);

#endif