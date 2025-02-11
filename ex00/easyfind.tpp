#include "easyfind.h"

template<typename T>
typename T::iterator	easyfind(T &box, int num)
{
	return (std::find(box.begin(), box.end(), num));
}
