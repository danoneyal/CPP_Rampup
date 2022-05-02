// SmartPointersApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory>

using namespace std; 
class Rectangle {
    
    int len; 
    int breadth;

public:
    Rectangle(int l, int b)
    {
        len = l;
        breadth = b;
    }
    int area()
    {
        return len * breadth;
    }
};
int main()
{
    
    unique_ptr <Rectangle> P1(make_unique<Rectangle>( Rectangle(10, 5)));
    cout << "area of rectangle P1 is :"<<P1->area() << endl;
    unique_ptr<Rectangle> P2; 
    P2 = move(P1);
    cout << "area of rectangle P2 is :" << P2->area() << endl;
    /*
    try 
    {
        cout << "area of rectangle P1 is :" << P1->area() << endl;
    }
    catch (...)
    {
        cout << "exception using unreferenced smart pointer P1" << endl;
    }
    */
    
    
    //std::cout << "Hello World!\n";


}

