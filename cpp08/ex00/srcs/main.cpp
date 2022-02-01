#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include "../includes/easyfind.hpp"

int main(void)
{
	
	std::vector<int> vec;
	std::deque<int> deq;
	std::list<int> lst;

	try
	{
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	for (int i = 5; i < 10; i++)
		deq.push_back(i);
	for (int i = 10; i < 15; i++)
		lst.push_back(i);

    std::cout << "Vector is : ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Deque is : ";
	for (std::deque<int>::iterator it2 = deq.begin(); it2 != deq.end(); ++it2)
		std::cout << *it2 << " ";
	std::cout << std::endl;
	std::cout << "List is : ";
	for (std::list<int>::iterator it3 = lst.begin(); it3 != lst.end(); ++it3)
		std::cout << *it3 << " ";
	std::cout << std::endl;

	try
	{
		std::cout << "found occurence of 4 in vector at index -> " << easyfind(vec, 4) << std::endl;
		std::cout << "found occurence of 8 in deque at index -> " << easyfind(deq, 8) << std::endl;
		std::cout << "found occurence of 14 in list at index -> " << easyfind(lst, 14) << std::endl;
		std::cout << "found occurence of 1 in deque at index -> " << easyfind(deq, 1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
