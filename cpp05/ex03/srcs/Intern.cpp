#include <iostream>
#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	 *this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	if (this != &src)
    	*this = src;
	return (*this);
}

Form *Intern::makeShrub(std::string const& target)
{
	Form *ret = new ShrubberyCreationForm(target);
	return (ret);
}
Form *Intern::makeRobot(std::string const& target)
{
	Form *ret = new RobotomyRequestForm(target);
	return (ret);
}
Form *Intern::makePres(std::string const& target)
{
	Form *ret = new PresidentialPardonForm(target);
	return (ret);
}

Form* Intern::makeForm(std::string const& name, std::string const& target) 
{
	Form* ret = NULL;
	typedef Form* (*ptr)(std::string const& target);
	struct formTypes 
	{
    	std::string form_name;
    	ptr         formMaker;
	};

	formTypes forms[] =
	{
    	{"ShrubberyCreationForm", &makeShrub},
    	{"RobotomyRequestForm", &makeRobot},
    	{"PresidentialPardonForm", &makePres},
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i].form_name)
		{
			ret = forms[i].formMaker(target);
			std::cout << "Intern creates " << *ret << std::endl;
			return (ret);
		}
	}
	throw Intern::UnknownFormException();
}

Intern::~Intern()
{
}
