#include <iostream>
#include "../includes/Bureaucrat.hpp"

int main()
{
	Bureaucrat test("Bob", 10);
	
	try
	{
		Bureaucrat test2("Jeff", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << test << std::endl;
	try
	{
		for (int i = 0; i < 10; i++)
			test.upGrade();
		std::cout << "bonjour" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << test << std::endl;

	try
	{
		for (int i = 0; i < 75; i++)
			test.downGrade();
		std::cout << "bonsoir" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << test << std::endl;

	try
	{
		for (int i = 0; i < 2000000; i++)
			test.downGrade();
		std::cout << "bonjour" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << test << std::endl;

	return 0;
}
