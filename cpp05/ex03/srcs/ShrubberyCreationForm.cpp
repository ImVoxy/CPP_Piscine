#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "unknown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	this->Form::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::string   filename = this->getTarget() + "_shrubbery.txt";
  	std::ofstream file(filename.c_str());

	if (file.is_open() == false)
		throw std::ofstream::failure("Could not open file " + this->getTarget() + "_shrubbery");
	else
	{
		file	<< "             _{\\ _{\\{\\/}/}/}__" << std::endl
				<< "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl
				<< "           {/{/\\}{/{/\\}(_)\\}{/{/\\} _" << std::endl
				<< "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl
				<< "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl
				<< "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl
				<< "    {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl
				<< "    _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl
				<< "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl
				<< "    {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl
				<< "    {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl
				<< "    {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl
				<< "    {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl
				<< "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl
				<< "        (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl
				<< "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl
				<< "            {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl
				<< "            {){/ {\\/}{\\/} \\}\\}" << std::endl
				<< "            (_)  \\.-'.-/" << std::endl
				<< "        __...--- |'-.-'| --...__" << std::endl
				<< "_...--\"   .-'    |'-.-'|  ' -.  \"\"--..__" << std::endl
				<< "-\"    ' .  . '   |.'-._| '  . .  '   " << std::endl
				<< ".  '-  '    .--' | '-.'|    .  '  . '" << std::endl
				<< "        ' ..     |'-_.-|" << std::endl
				<< ".  '  .       _.-|-._ -|-._  .  '  ." << std::endl
				<< "            .'   |'- .-|   '." << std::endl
				<< "..-'   ' .  '.   `-._.-�   .'  '  - ." << std::endl
				<< ".-' '        '-._______.-'     '  ." << std::endl
				<< "        .      ~," << std::endl;
	}
	return;
}
