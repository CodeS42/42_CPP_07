#include "../headers/iter.hpp"

void toUpperChar(char c)
{
	std::cout << static_cast<char>(toupper(c)) << std::endl;
}

void printString(std::string s)
{
	std::cout << s << std::endl;
}

void incrementAndPrint(int nb)
{
	std::cout << ++nb << std::endl;
}

int main( void ) 
{
	char char_array[4] = {'a', 'b', 'c', 'd'};
	std::string string_array[4] = {"bonjour", "au revoir", "merci", "de rien"};
	int int_array[4] = {1, 2, 3, 4};

	iter(char_array, 4, toUpperChar);
	iter(string_array, 4, printString);
	iter(int_array, 4, incrementAndPrint);
	
	return 0;
}