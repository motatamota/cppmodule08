#ifndef MU_H
# define MU_H
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack& other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();

	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"
#endif
