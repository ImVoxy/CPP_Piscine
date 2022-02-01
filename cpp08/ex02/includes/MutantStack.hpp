#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack(void) : std::stack<T>()
    {
    }
    MutantStack(MutantStack const& src) : std::stack<T>(src)
    {
    }
    virtual ~MutantStack(void)
    {
    }
    MutantStack& operator=(MutantStack const& src)
    {
        this->c = src.c;
        return *this;
    }

   typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(void) 
    {
        return this->c.begin();
    }
    iterator end(void)
    {
        return this->c.end();
    }
};

#endif
