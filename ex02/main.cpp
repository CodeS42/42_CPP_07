#include "Array.hpp"

int main(void)
{
    unsigned int i;
    Array<int> a;
    Array<int> b(3);
    Array<std::string> c(2);
    const Array<std::string> d(2);

    try
    {
        std::cout << a[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    for (i = 0 ; i < b.size() ; i++)
        std::cout << b[i] << std::endl;
    try
    {
        b[0] = 45;
        b[1] = 12;
        b[2] = 1;
        b[3] = 111;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    for (i = 0 ; i < b.size() ; i++)
        std::cout << b[i] << std::endl;

    for (i = 0 ; i < c.size() ; i++)
        std::cout << c[i] << std::endl;
    try
    {
        c[0] = "hola";
        c[1] = "hello";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    for (i = 0 ; i < c.size() ; i++)
        std::cout << c[i] << std::endl;
    
    a = b;
    for (i = 0 ; i < a.size() ; i++)
        std::cout << a[i] << std::endl;

    std::cout << d[0] << std::endl;
    // d[0] = "hi";

    return (0);
}
