#ifndef MU_H
# define MU_H
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();

	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
};

#include "MutantStack.tpp"
#endif