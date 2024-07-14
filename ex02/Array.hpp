#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int array_size;

	public:
		Array() : array(new T[0]), array_size(0) 
		{
			std::cout << "Array default constructor called." << std::endl;
		}

		Array(unsigned int n) : array(new T[n]()), array_size(n) 
		{
			std::cout << "Array constructor called." << std::endl;
		}

		Array(const Array& obj)
		{
			std::cout << "Array copy constructor called." << std::endl;
			*this = obj;
		}

		Array& operator=(const Array& other)
		{
			std::cout << "Array assignment operator called." << std::endl;
			if (this != &other)
			{
				if (array)
					delete[] array;
				array_size = other.size();
				array = new T[size()];
				for (unsigned int i = 0 ; i < size() ; i++)
					array[i] = other.array[i];
			}
			return (*this);
		}

		T& operator[](unsigned int index)
		{
			if (!array || index >= size())
				throw IndexOutOfRange();
			return (array[index]);
		}

		const T& operator[](unsigned int index) const
		{
			if (!array || index >= size())
				throw IndexOutOfRange();
			return (array[index]);
		}
		
		~Array()
		{
			std::cout << "Array destructor called." << std::endl;
			if (array)
				delete[] array;
		}

		unsigned int size(void) const
		{
			return (array_size);
		}

	class IndexOutOfRange : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of range!");
			}
	};
};

#endif
