#ifndef MYVEC_HPP
#define MYVEC_HPP

#include <iostream>

class MyVec
{
public:
        MyVec(); // constructor
        
        ~MyVec(); // destructor
        
        // Member functions
        int get_size() const;
        int get_capacity() const;
        void push_back(const int& elem);
        void pop_back();
        void resize(int new_size);
        void clear();
private:
        int* data;
        int size;
        int capacity;
};

#endif