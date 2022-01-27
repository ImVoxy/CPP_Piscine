#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "unknown")
 {
 }

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	this->Form::operator=(src);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "Brrrrrrrrrrrrtzzzzzzzz *drill noises* ";
	int test = std::rand() % 2;
	if (test == 0)
		std::cout << "Robotomy worked ! " << this->getTarget() << " is now a robot !!!\n";
	else
		std::cout << "Robotomy failed ! " << this->getTarget() << " is still human...\n";
}
