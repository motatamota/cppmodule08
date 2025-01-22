#ifndef SP_H
# define SP_H
# include <exception>

class Span
{
private:

public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span	&operator=(const Span &other);
	~Span();

	void	addNumber();
	unsigned int	shortSpan();
	unsigned int	longSpan();
	class FillContentException : std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
};

#endif
