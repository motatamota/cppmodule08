#ifndef EA_H
# define EA_H
# include <exception>
# include <algorithm>
# include <iterator>

template<typename T>
typename T::iterator	easyfind(T box, int num);
class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Not found");
			}
};
# include "easyfind.tpp"
#endif
