# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _val;
	static const int _fractionalBitsNb = 8;

public:
	Fixed(void);

	Fixed(const Fixed &src);

	Fixed &operator=(const Fixed &src);

	int	getRawBits(void) const;
	void setRawBits(const int rawval);

	~Fixed();
};

#endif