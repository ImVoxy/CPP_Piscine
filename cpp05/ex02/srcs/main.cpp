#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

void test(Form &form, Bureaucrat &bob, Bureaucrat &jim, Bureaucrat &mid)
{
	bob.executeForm(form);
	jim.signForm(form);
	mid.signForm(form);
	jim.executeForm(form);
	mid.executeForm(form);
	bob.executeForm(form);
	mid.upGrade();
	mid.executeForm(form);
}

int main()
{
	Bureaucrat bob("bob", 1);
	Bureaucrat jim("jim", 150);
	Bureaucrat midshrub("midshrub", 138);
	Bureaucrat midrobot("midrobot", 46);
	Bureaucrat midpres("midpres", 6);

	ShrubberyCreationForm shrub("shrub");
	RobotomyRequestForm robot("robot");
	PresidentialPardonForm pres("pres");
	test(shrub, bob, jim, midshrub);
	std::cout << "-----" << std::endl;
	test(robot, bob, jim, midrobot);
	std::cout << "-----" << std::endl;
	test(pres, bob, jim, midpres);

	return 0;
}
