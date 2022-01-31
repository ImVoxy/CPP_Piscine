#include <iostream>
#include <string>
#include "../includes/iter.hpp"

void str_printer(std::string &str)
{
	std::cout << "(str fct : )" << str << std::endl;
}

void test_printer(test &src)
{
	std::cout << "(test fct : )" << src << std::endl;
}

int main(void)
{
	std::string strs[] = {"This", "is", "a", "test"};
	iter(strs, sizeof(strs) / sizeof(std::string), str_printer);

	test tests[] = {test(0), test(1), test(2), test(3)};
	iter(tests, sizeof(tests) / sizeof(test), template_printer);
	iter(tests, sizeof(tests) / sizeof(test), test_printer);

	return (0);
}
