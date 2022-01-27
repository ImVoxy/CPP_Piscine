#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
	Bureaucrat bob("Bob", 2);
	Bureaucrat jim("Jim", 75);
	Bureaucrat jeff("Jeff", 140);
	
	Form test1("test 1", 1, 1);
	Form test70("test 70", 70, 70);
	Form test150("test 150", 150, 150);

	std::cout << test1 << std::endl;
	std::cout << test70 << std::endl;
	std::cout << test150 << std::endl;
	std::cout << bob << std::endl;
	std::cout << jim << std::endl;
	std::cout << jeff << std::endl;

	// test with grade < signgrade
	std::cout << "------grade < signgrade"<< std::endl;
	bob.signForm(test1);
	jim.signForm(test1);
	jeff.signForm(test70);
	std::cout << test1 << std::endl;
	std::cout << test70 << std::endl;
	std::cout << test150 << std::endl;

	// test with grad > signgrade
	std::cout << "------grade > signgrade"<< std::endl;
	bob.signForm(test70);
	jim.signForm(test150);
	jeff.signForm(test150);
	std::cout << test1 << std::endl;
	std::cout << test70 << std::endl;
	std::cout << test150 << std::endl;

	//after upgraded

	std::cout << "------upgraded bureaucrat"<< std::endl;
	bob.upGrade();
	jim.upGrade();
	jim.upGrade();
	jim.upGrade();
	jim.upGrade();
	jim.upGrade();
	bob.signForm(test1);
	jim.signForm(test70);
	std::cout << test1 << std::endl;
	std::cout << test70 << std::endl;
	std::cout << test150 << std::endl;

	return (0);
	}