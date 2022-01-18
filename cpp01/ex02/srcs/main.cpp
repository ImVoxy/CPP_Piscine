#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "&str is :	   " << &str << std::endl;
	std::cout << "Using stringPTR :  " << stringPTR << std::endl;
	std::cout << "Usigne stringREF : " << &stringREF << std::endl;
	std::cout << "the string is : " << *stringPTR << " (from *stringPTR)" << std::endl;
	std::cout << "the string is : " << stringREF << " (from stringREF)" << std::endl;
}