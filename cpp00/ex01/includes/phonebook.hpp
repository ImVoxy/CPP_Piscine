/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <alpascal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:46:14 by alpascal          #+#    #+#             */
/*   Updated: 2021/12/31 11:59:19 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Phonebook
{
private:

public:	

	int	index;
	struct contact
	{
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	};

	struct contact contact[8];
	
	Phonebook(void);
	void Add(void);
	void ShowAllContact(void);
	void Search(void);
	~Phonebook(void);
};

#endif