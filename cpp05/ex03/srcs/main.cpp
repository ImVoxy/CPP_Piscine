#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

void test(Form *form, Bureaucrat &bob, Bureaucrat &jim, Bureaucrat &mid)
{
	bob.executeForm(*form);
	jim.signForm(*form);
	mid.signForm(*form);
	jim.executeForm(*form);
	mid.executeForm(*form);
	bob.executeForm(*form);
	mid.upGrade();
	mid.executeForm(*form);
	delete (form);
}

int main()
{
	Bureaucrat bob("bob", 1);
	Bureaucrat jim("jim", 150);
	Bureaucrat midshrub("midshrub", 138);
	Bureaucrat midrobot("midrobot", 46);
	Bureaucrat midpres("midpres", 6);
	Intern intern;
	Form *shrub;
	Form *robot;
	Form *pres;
	Form *fail;
	
	try
	{
		shrub = intern.makeForm("ShrubberyCreationForm", "target");
		test(shrub, bob, jim, midshrub);
		// delete (shrub);
		std::cout << "-----" << std::endl;
		robot = intern.makeForm("RobotomyRequestForm", "target");
		test(robot, bob, jim, midrobot);
		// delete (robot);
		std::cout << "-----" << std::endl;
		pres = intern.makeForm("PresidentialPardonForm", "target");
		test(pres, bob, jim, midpres);
		// delete (pres);
		std::cout << "-----" << std::endl;
		fail = intern.makeForm("rejhfboze", "target");
		test(fail, bob, jim, midpres);
		// delete (fail);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
