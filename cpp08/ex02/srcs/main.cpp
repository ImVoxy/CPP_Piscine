#include "../includes/MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>

int main()
{
	
		std::cout << "---Tests from subject(mutantstack)" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
	
	
		std::cout << "---Tests from subject(std::list)" << std::endl;
		std::list<int> lstack;
		lstack.push_back(5);
		lstack.push_back(17);
		std::cout << lstack.back() << std::endl;
		lstack.pop_back();
		std::cout << lstack.size() << std::endl;
		lstack.push_back(3);
		lstack.push_back(5);
		lstack.push_back(737);
		//[...]
		lstack.push_back(0);
		std::list<int>::iterator it2 = lstack.begin();
		std::list<int>::iterator ite2 = lstack.end();
		++it2;
		--it2;
		while (it2 != ite2)
		{
		std::cout << *it2 << std::endl;
		++it2;
		}
	
	std::cout << "--------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "---Comparing empty member fonction too" << std::endl;
	std::cout << "mstack.empty() = " << mstack.empty() << std::endl;
	std::cout << "lstack.empty() = " << lstack.empty() << std::endl;
	std::cout << std::endl;

	std::cout << "---Testing with str" << std::endl;
	MutantStack<std::string> strstack;
	std::list<std::string>   strlist;

	strstack.push("This ");
	strstack.push("is ");
	strstack.push("a ");
	strstack.push("test ");
	strlist.push_back("This ");
	strlist.push_back("is ");
	strlist.push_back("a ");
	strlist.push_back("test ");

	std::cout << "strstack.size() = " << strstack.size() << std::endl;
	std::cout << "strlist.size() = " << strlist.size() << std::endl;

	strstack.pop();
	strstack.pop();
 	strlist.pop_back();
	strlist.pop_back();

	std::cout << "strstack.size() = " << strstack.size() << std::endl;
	std::cout << "strlist.size() = " << strlist.size() << std::endl;

	strstack.push("the ");
	strstack.push("end !");
	strlist.push_back("the ");
	strlist.push_back("end !");

	
	std::cout << "strstack.empty() = " << strstack.empty() << std::endl;
	std::cout << "strlist.empty() = " << strlist.empty() << std::endl;

	MutantStack<std::string>::iterator itstack = strstack.begin();
	MutantStack<std::string>::iterator itestack = strstack.end();
	std::list<std::string>::iterator   itlist = strlist.begin();
	std::list<std::string>::iterator   itelist = strlist.end();

	while (itstack != itestack)
	{
		std::cout << *itstack;
		++itstack;
	}
	std::cout << std::endl;
	while (itlist != itelist)
	{
		std::cout << *itlist;
		++itlist;
	}
	std::cout << std::endl;
  return 0;
}