/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:02:04 by alpascal          #+#    #+#             */
/*   Updated: 2021/12/31 11:59:25 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int	main(void)
{
	Phonebook phonebook;
	std::string command;

	while (!std::cin.eof())
	{
		std::cout << "Type your command :" << std::endl;
		std::cout << "-> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
		{
			if (phonebook.index != 0)
				phonebook.Search();
			else
				std::cout << 
				"Your contact list is currently empty, consider using ADD to add a new contact"
				 << std::endl;
		}
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << "Invalid command, please use :" << std::endl;
			std::cout << "	- ADD to add a new contact (8 contacts max)" << std::endl;
			std::cout << "	- SEARCH to search a contact in the current Phonebook" << std::endl;
			std::cout << "	- EXIT to close the Phonebook (all datas will be permanently lost)" << std::endl;
		}	
	}
	return (0);
}