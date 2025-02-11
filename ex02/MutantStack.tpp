#include "MutantStack.h"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other)
{
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template<typename T>
iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}