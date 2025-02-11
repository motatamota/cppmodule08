#include "easyfind.h"

template<typename T>
typename T::iterator	easyfind(T box, int num)
{
	typename T::iterator	it;

	it = find(box.begin(), box.end(), num);
	if (it == box.end())
		throw (NotFoundException());
	return (it);
}
