#ifndef STRING_HPP
#define STRING_HPP

#include <cstddef>

class String
{
public:
        String();
        String(const char*);
        ~String();
        std::size_t length() const;
        const char* c_str() const;
        void print() const;
private:
        char* data;
        std::size_t size;
};

#endif