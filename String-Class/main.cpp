#include <iostream>
#include "string.hpp"

int main()
{
    String empty_str;
    String str("Hello, World!");

    std::cout << empty_str.length() << std::endl;
    empty_str.print();

    std::cout << str.length() << std::endl;
    str.print();

    const char* cstyle_str = str.c_str();
    std::cout << cstyle_str << std::endl;

    return 0;
}