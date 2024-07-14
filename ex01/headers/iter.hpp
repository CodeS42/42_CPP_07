#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename I>
void iter(I *array, size_t length, void (*func)(I))
{
	if (!array || !func)
		return ;

	for (size_t i = 0 ; i < length ; i++)
		func(array[i]);
}

#endif
