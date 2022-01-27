#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	Bureaucrat();

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &src);
	void upGrade();
	void downGrade();
	void signForm(Form& form);
	Bureaucrat &operator=(Bureaucrat const &src);
	std::string getName() const;
	int getGrade() const;
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("The grade is too high (1 is a maximum)");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("The grade too low (150 is a minimum)");
		}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
