#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
		std::string	_name;

	private:

};

	Zombie *zombieHorde(int N, std::string name);

#endif