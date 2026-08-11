#include <iostream>

int main()
{
    char a = 'a';
    unsigned char b = 65;
    signed char c = 65;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std:: cout <<"sizeof(a): " << sizeof(a) << std::endl;
    std:: cout <<"sizeof(b): " << sizeof(b) << std::endl;
    std:: cout <<"sizeof(c): " << sizeof(c) << std::endl;
    return 0;
}