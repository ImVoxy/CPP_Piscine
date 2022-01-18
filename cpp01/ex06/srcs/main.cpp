#include <iostream>
#include "../includes/Karen.hpp"

static int getLevel(std::string str)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == str)
			return (i);
	}
	return (4);
}

int main(int ac, char *av[])
{
	int i;
	
	if (ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
	else
	{
		Karen karen;
		i = getLevel(av[1]);
		switch (i)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
				break;
		}
	}
	return (0);
}