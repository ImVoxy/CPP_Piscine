# ifndef FIXED_HPP
# define FIXED_HPP

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

	bool operator<(const Fixed &rhs);
	bool operator>(const Fixed &rhs);
	bool operator<=(const Fixed &rhs);
	bool operator>=(const Fixed &rhs);
	bool operator==(const Fixed &ths);
	bool operator!=(const Fixed &ths);

	Fixed operator+(const Fixed &rhs);
	Fixed operator-(const Fixed &rhs);
	Fixed operator*(const Fixed &rhs);
	Fixed operator/(const Fixed &rhs);

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	int toInt(void) const;
	float toFloat(void) const;

	int getRawBits(void) const;
	void setRawBits(const int raw);

	~Fixed();

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &val);

#endif