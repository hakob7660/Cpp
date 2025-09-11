#include "MyVec.hpp"

int main() 
{
    MyVec vec;

    std::cout << "Initial size: " << vec.get_size() << std::endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "After pushing 3 elements: " << vec.get_size() << std::endl;

    vec.pop_back();
    
    std::cout << "After popping one element: " << vec.get_size() << std::endl;
    
    vec.clear();

    std::cout << "After clearing the vector: " << vec.get_size() << std::endl;

    vec.push_back(40);
    vec.resize(5);

    std::cout << "After pushing 40 to the vector and resize to 5: " << vec.get_size() << std::endl;

    return 0;
}