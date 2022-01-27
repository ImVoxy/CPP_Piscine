#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form() :  _target("unknown"), _name("unnamed"), _sign(0), _signGrade(75), _execGrade(75)
{
}

Form::Form(std::string const &name, int signGrade, int execGrade, std::string const &target) : _target(target), _name(name),
										_sign(0), _signGrade(signGrade), _execGrade(execGrade)
{
}

Form::Form(Form const &src) :  _target(src._target), _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	this->_sign = src._sign;
}

Form &Form::operator=(Form const &src)
{
	this->_sign = src._sign;
	return (*this);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_sign);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecGrade() const
{
	return (this->_execGrade);
}

std::string Form::getTarget() const
{
	return (this->_target);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw Form::UnSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << "; sign grade : " << form.getSignGrade() << "; exec grade : " << 
		form.getExecGrade() << "; sign state : " << form.getSign();
	return (out);
}
