#include <iostream>
#include <string>
#include <vector>
#include "../includes/span.hpp"

int main(void)
{
	std::cout << "---Test from subject" << std::endl;
	Span test = Span(5);
	Span test2 = Span(5);

	test.addNumber(5);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	std::cout << "--trying on empty vector" << std::endl;
	try
	{
		test2.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		test2.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--trying on single element vector" << std::endl;
	try
	{
		test2.addNumber(42);
		test2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		test2.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---With addMoreNumbers" << std::endl;

	Span test3(50000);

	std::vector<int> vec;
	for (int i = 0; i < 50000; i++)
		vec.push_back(i + 1);
	test3.addMoreNumbers(vec.begin(), vec.end());

	std::cout << test3.shortestSpan() << std::endl;
	std::cout << test3.longestSpan() << std::endl;


	std::cout << "---Trying to add more than N" << std::endl;
	try
	{
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
		test.addNumber(6);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
