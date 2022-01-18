#include "../includes/Karen.hpp"

Karen::Karen(void) 
{
  this->fp[0] = &Karen::debug;
  this->fp[1] = &Karen::info;
  this->fp[2] = &Karen::warning;
  this->fp[3] = &Karen::error;
  return;
}

void Karen::debug(void)
{
	std::cerr << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cerr << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cerr << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*fp[i])();
			return;
		}
	}
}

Karen::~Karen(void)
{
	return;
}