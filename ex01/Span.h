#ifndef SP_H
# define SP_H
# include <exception>

class Span
{
private:
	int	*box_;
	int	size_;
	int	many_;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span	&operator=(const Span &other);
	~Span();

	void	addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	class FillContentException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
	class LowSizeException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
};

#endif
