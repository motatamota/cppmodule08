#ifndef EA_H
# define EA_H
# include <exception>
# include <algorithm>
# include <iterator>

template<typename T>
typename T::iterator	easyfind(T &box, int num);

# include "easyfind.tpp"

#endif
