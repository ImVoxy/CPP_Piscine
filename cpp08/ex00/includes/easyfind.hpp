#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class NoOccurenceFound : public std::exception
{
public:
	const char *what() const throw()
	{
		return "No occurence found";
	}
};

template <typename T>
int easyfind(T &cont, int i)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), i);
	if (it == cont.end())
		throw NoOccurenceFound();
	return (std::distance(cont.begin(), it));
};

#endif
