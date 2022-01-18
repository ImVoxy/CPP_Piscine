# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

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