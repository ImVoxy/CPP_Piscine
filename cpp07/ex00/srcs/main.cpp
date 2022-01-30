#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	//more tests

	char e = 'e';
	char f = 'f';
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << max(e, f) << std::endl;
	test g(2);
	test h(3);
	::swap(g, h);
	std::cout << "g = " << g.getValue() << ", h = " << h.getValue() << std::endl;
	std::cout << "min( g, h ) = " << min(g, h) << std::endl;
	std::cout << "max( g, h ) = " << max(g, h) << std::endl;

	return (0);
}
