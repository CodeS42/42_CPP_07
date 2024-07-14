#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename S>
void swap(S &a, S &b)
{
	S tmp = b;

	b = a;
	a = tmp;
}

template<typename A>
A max(A a, A b)
{
	return (a > b ? a : b);
}

template<typename I>
I min(I a, I b)
{
	return (a < b ? a : b);
}

#endif
