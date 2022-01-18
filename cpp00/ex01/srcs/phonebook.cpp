#include "../includes/phonebook.hpp"	

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to alpascal's Phonebook !" << std::endl;
	this->index = 0;
}

void	Phonebook::Add(void)
{
	if (this->index >= 8)
	{
		std::cout << "Sorry, you are not able to save more than 8 contacts..." << std::endl;
		return;
	}
	std::cout << "First name : ";
	std::cin >> this->contact[index].first_name;
	std::cout << "Last name : ";
	std::cin >> this->contact[index].last_name;
	std::cout << "Nickname : ";
	std::cin >> this->contact[index].nickname;
	std::cout << "Phone number : ";
	std::cin >> this->contact[index].phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> this->contact[index].darkest_secret;
	this->index += 1;
	
	return;
}

void	Phonebook::Search(void)
{
	int command;

	std::cout << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST_NAME";
	std::cout << "|" << std::setw(10) << "LAST_NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << std::endl;
	std::cout << "__________";
	std::cout << "|__________";
	std::cout << "|__________";
	std::cout << "|__________" << std::endl;
	for (int i = 0; i < this->index; i++)
	{
		std::cout << std::setw(10) << i + 1;
		if (this->contact[i].first_name.length() <= 10)
			std::cout << "|" << std::setw(10) << this->contact[i].first_name;
		else
			std::cout << "|" << this->contact[i].first_name.substr(0, 9) << ".";
		if (this->contact[i].last_name.length() <= 10)
			std::cout << "|" << std::setw(10) << this->contact[i].last_name;
		else
			std::cout << "|" << this->contact[i].last_name.substr(0, 9) << ".";
		if (this->contact[i].nickname.length() <= 10)
			std::cout << "|" << std::setw(10) << this->contact[i].nickname << std::endl;
		else
			std::cout << "|" << this->contact[i].nickname.substr(0, 9) << "." << std::endl;
	}
	std::cout << "__________";
	std::cout << "|__________";
	std::cout << "|__________";
	std::cout << "|__________" << std::endl;	
	std::cout << "Type index of the contact of your choice :" << std::endl;
	std::cout << "-> ";
	std::cin >> command;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "The index you chosed is invalid.." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}
	if (!(command > 0 && command <= this->index))
	{
		std::cout << "The index you chosed is invalid.." << std::endl;
		return;
	}
	std::cout << this->contact[command - 1].first_name << std::endl;
	std::cout << this->contact[command - 1].last_name << std::endl;
	std::cout << this->contact[command - 1].nickname << std::endl;
	std::cout << this->contact[command - 1].phone_number << std::endl;
	std::cout << this->contact[command - 1].darkest_secret << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Thanks for using alpascal's Phonebook, see you later ! o/" << std::endl;

	return;
}