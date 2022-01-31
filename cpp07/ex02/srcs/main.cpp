#include <iostream>
#include <string>
#include "../includes/Array.hpp"
#include <cstdlib>

int main(void)
{
	Array<std::string> test(4);
	Array<std::string> test2;
	Array<int> test3(4);

    std::cout << "---basic test with strings" << std::endl;
	test[0] = "This ";
	test[1] = "is ";
	test[2] = "a ";
	test[3] = "test ";
	for (int i = 0; i < 4; i++)
		std::cout << test[i];
	std::cout << std::endl;

    std::cout << "---basic test with intergers" << std::endl;
	test3[0] = 1;
	test3[1] = 2;
	test3[2] = 4;
	test3[3] = 12;
	for (int i = 0; i < 4; i++)
		std::cout << test3[i] << "  ";
	std::cout << std::endl;

	test2 = test;
	test2[0] = "There ";
	test[1] = "was ";
	std::cout << "---Copied then changed first value of the copy" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << test2[i];
	std::cout << std::endl;

	std::cout << "---Changed 2d value of the original" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << test[i];
	std::cout << std::endl;

	std::cout << "---Trying to acces an out of range element" << std::endl;
	try
	{
		std::cout << test[42];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << test[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << test[4];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
