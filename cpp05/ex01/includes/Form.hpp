#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _sign;
	const int _signGrade;
	const int _execGrade;
	Form();
public:
	Form(std::string const &name, int signGrade, int execGrade);
	Form(Form const &src);
	Form &operator=(Form const &src);
	std::string getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecGrade() const;
	virtual ~Form();

	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("this Bureaucrat's grade is too low");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif
