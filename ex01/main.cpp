#include "Span.h"
#include <iostream>

int	main()
{

	for (int n = 0; n < 15; n++)
	{
		Span test(10);
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
		Span test2(4);
		for (int n = 0; n < 4; n++)
		{
			std::cout << "input: " << n * n * n << std::endl;
			test2.addNumber(n * n * n);
		}
		std::cout << "short: " << test2.shortestSpan() << std::endl;
		std::cout << "long: " << test2.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span test2(4);
		for (int n = 0; n < 1; n++)
		{
			std::cout << "input: " << n * n * n << std::endl;
			test2.addNumber(n * n * n);
		}
		std::cout << "short: " << test2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	try
	{
		Span test2(4);
		for (int n = 0; n < 1; n++)
		{
			std::cout << "input: " << n * n * n << std::endl;
			test2.addNumber(n * n * n);
		}
		std::cout << "long: " << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	try
	{
		Span test2(10000);
		for (int n = 0; n < 10000; n++)
		{
			test2.addNumber(n * n % 100);
		}
		std::cout << "short: " << test2.shortestSpan() << std::endl;
		std::cout << "long: " << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
}
