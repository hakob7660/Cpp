#include <iostream>
#include "matrix.hpp"


int main()
{
    Matrix mat(3,3);
    
    mat.set(0, 0, 1);
    mat.set(0, 1, 2);
    mat.set(0, 2, 3);
    mat.set(1, 0, 4);
    mat.set(1, 1, 5);
    mat.set(1, 2, 6);
    mat.set(2, 0, 7);
    mat.set(2, 1, 8);
    mat.set(2, 2, 9);

    std::cout << mat.getRows() << ", " << mat.getCols() << std::endl;

    mat.print();

    return 0;
}