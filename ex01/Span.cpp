#include "Span.h"

Span::Span() : box_(0), size_(0), reserve_(0)
{
}

Span::Span(unsigned int N) : box_(new int[N]()), size_(N), reserve_(0)
{

}

Span::Span(const Span &other) : box_(0), size_(0), reserve_(0)
{
	*this = other;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		delete[] box_;
		box_ = new int[other.size_]();
		size_ = other.size_;
		reserve_ = other.reserve_;
		for (int n = 0; n < other.reserve_; n++)
			box_[n] = other.box_[n];
	}
	return (*this);
}

Span::~Span()
{
	delete[] this->box_;
}

void	Span::addNumber(int num)
{
	if (reserve_ == size_)
		throw (FillContentException());
	box_[reserve_] = num;
	reserve_++;
}

unsigned int	Span::shortestSpan()
{
	unsigned int	ans;
	long			tmp;

	ans = __UINT32_MAX__;
	if (reserve_ < 2)
		throw (LowSizeException());
	for (int n = 0; n < reserve_ - 1; n++)
	{
		for (int m = n + 1; m < reserve_; m++)
		{
			tmp = box_[m] - box_[n];
			if (tmp < 0)
				tmp = -tmp;
			if (tmp < ans)
				ans = tmp;
		}
	}
	return (ans);
}

unsigned int	Span::longestSpan()
{
	long	ans;
	long	tmp;

	ans = 0;
	if (reserve_ < 2)
		throw (LowSizeException());
	for (int n = 0; n < reserve_ - 1; n++)
	{
		for (int m = n + 1; m < reserve_; m++)
		{
			tmp = box_[m] - box_[n];
			if (tmp < 0)
				tmp = -tmp;
			if (tmp > ans)
				ans = tmp;
		}
	}
	return (ans);
}

const char	*Span::FillContentException::what() const throw()
{
	return ("Contents is fill.");
}

const char	*Span::LowSizeException::what() const throw()
{
	return ("Don't havu enough contents.");
}
