#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(Intern const &src);
	Intern &operator=(Intern const &src);
	static Form *makeShrub(std::string const& target);
	static Form *makeRobot(std::string const& target);
	static Form *makePres(std::string const& target);
	Form *makeForm(std::string const &formType, std::string const &target);

	class UnknownFormException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Intern doesn't know that kind of form.. He won't be able to make it..");
		}
	};

	~Intern();
};

#endif
