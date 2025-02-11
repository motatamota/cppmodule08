#include "Span.h"
#include <iostream>

int	main()
{
	Span test(10);
	Span test2(4);

	for (int n = 0; n < 15; n++)
	{
		std::cout << "input: " << n << std::endl;
		try
		{
			test.addNumber(n);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			break ;
		}

	}
	std::cout << std::endl;
	try
	{
		for (int n = 0; n < 4; n++)
		{
			std::cout << "input: " << n * n * n << std::endl;
			test2.addNumber(n * n * n);
		}
		std::cout << "short: " << test2.shortestSpan() << std::endl;
		std::cout << "long: " << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
