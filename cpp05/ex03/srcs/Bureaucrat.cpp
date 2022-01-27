#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	this->_grade = src._grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::upGrade()
{
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
}

void Bureaucrat::downGrade()
{
	if (this->_grade + 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
    	form.beSigned(*this);
    	std::cout << *this << " signs " << form.getName() << " form "
              << std::endl;
	}
	catch (std::exception& e)
	{
    	std::cout << *this << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
void Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.action(*this);
		std::cout << *this << " executes " << form << std::endl;
	}
	catch (const std::exception& e)
	{

		std::cout << *this << " cannot execute " << form << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat()
{
}
