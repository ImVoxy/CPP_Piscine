#include "Brain.hpp"

Brain::Brain(void)
{
  std::cout << "< Brain: default constructor called >" << std::endl;
  return;
}

Brain::Brain(Brain const& src)
{
  std::cout << "< Brain: copy constructor called >" << std::endl;
  *this = src;
  return;
}

Brain& Brain::operator=(Brain const& src)
{
  if (this != &src) {
    for (int i = 0; i < 100; i++) {
      this->ideas[i] = src.ideas[i];
    }
  }
  return *this;
}

std::string	*Brain::getIdeas()
{ 
	return this->ideas;
}

Brain::~Brain(void)
{
  std::cout << "< Brain: destructor called >" << std::endl;
  return;
}
