#include <iostream>
#include <cstring>
#include "string.hpp"

String::String()
    : size{0}, data {new char[1]}
    {
    data[0] = '\0';
    }

String::String(const char* str)
{
    if(!str)
    {
        String();
    }
    else 
    {
        size = std::strlen(str);
        data = new char[size + 1];
        std::strcpy(data, str);
    }
}

String::~String()
{
    delete[] data;
}

size_t String::length() const
{
    return size;
}

const char* String::c_str() const
{
    return data;
}

void String::print() const
{
    for(std::size_t i {0}; i < length(); ++i)
    {
        std::cout << data[i];
    }
    std::cout << '\n';
}


