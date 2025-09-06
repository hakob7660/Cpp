#include <iostream>
#include <numbers>

double area(double radius)
{
    return radius * radius * std::numbers::pi;
}

double area(double width,double height, char type)
{
    return width * height;
}

double area(double base,double height)
{
    return (base * height) / 2;
}

int area(int side)
{
    return side * side;
}

int main() 
{
    double r = 0.0, w = 0.0, h1 = 0.0,b = 0.0, h2 = 0.0;
    int s = 0;

    std::cout << "Enter radius of the circle" << std::endl;
    std::cin >> r;
    std::cout << "Area of a circle with radius " << r << " is: " << area(r) << std::endl;
    
    std::cout << "Enter width and height of the rectangle" << std::endl;
    std::cin >> w >> h1;
    std::cout << "Area of a rectangle of width " << w << " and height " << h1 << " is: " << area(w,h1,'r') << std::endl;

    std::cout << "Enter base and height of a triangle" << std::endl;
    std::cin >> b >> h2;
    std::cout << "Area of a triangle with base " << b << "and height " << h2 << " is: " << area(b,h2) << std::endl;
    
    std::cout << "Enter side of the square" << std::endl;
    std::cin >> s;
    std::cout << "Area of a square with side " << s << " is: " << area(s) << std::endl;

    return 0;
}