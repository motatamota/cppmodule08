#include "easyfind.h"

const char	*NotFoundException::what() const throw()
{
	return ("Not found");
}
