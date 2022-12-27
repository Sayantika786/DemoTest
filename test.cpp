#include <fstream>
#include <iostream>
using namespace std;
 
// Declaration of Base class
class Shape {
public:
    // Usage of virtual constructor
    virtual void calculate()
    {
        cout << "Area of your Shape " << "edit from Developer2";
    }
    // usage of virtual Destuctor to avoid memory leak
    virtual ~Shape()
    {
        cout << "Shape Destuctor Call\n";
    }
};
// Declaration of Derived class
class Rectangle : public Shape {
public:
    int width, height, area;
 
    void calculate()
    {
        cout << "Enter Width of Rectangle: ";
        cin >> width;
 
        cout << "Enter Height of Rectangle: ";
        cin >> height;
 
        area = height * width;
        cout << "Area of Rectangle: " << area << "\n";
    }
 
    // Virtual Destuctor for every Derived class
    virtual ~Rectangle()
    {
        cout << "Rectangle Destuctor Call\n";
    }
};

int main()
{
 
    // base class pointer
    Shape* S;
    Rectangle r;
 
    // initialization of reference variable
    S = &r;
 
    // calling of Rectangle function
    S->calculate();
    return 0;
}
