#include <iostream>
#include "MyVec.hpp"

MyVec::MyVec()
    :size(0), capacity(1), data(new int[capacity]) { }

MyVec::~MyVec()
{
    delete[] data;
}

int MyVec::get_size() const { return size; }

int MyVec::get_capacity() const { return capacity; }

void MyVec::push_back(const int& elem)
{
    if(size == capacity)
    {
        capacity *= 2;
        int* new_data = new int[capacity];

        for(int i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }

        delete[] data;
        data = new_data;
    }
    data[size++] = elem;
}

void MyVec::pop_back()
{
    if(size > 0)
    {
        size--;
    }
}

void MyVec::resize(int new_size)
{
    if(new_size < size)
    {
        size = new_size;
    }
    else if(new_size > size)
    {
        int* new_data = new int[new_size];

        for(int i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }

        delete[] data;
        data = new_data;
        size = new_size;
    }
    else 
    {
        size = new_size;
    }
}

void MyVec::clear()
{
    size = 0;
}

