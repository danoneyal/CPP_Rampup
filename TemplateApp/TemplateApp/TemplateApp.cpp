// TemplateApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

template <typename T>
void my_swap(T& a, T& b)
{
    T temp(a);
    a = b;
    b = temp;
};

template<typename T1, typename II, typename X>
T1 max(T1 a, T1 b) 
{
     T1 ret= (a > b) ? a: b;
     return ret;
}

template <class Tx>
Tx min(Tx a, Tx b)
{
    Tx ret = (a < b) ? a : b;
    return ret;
}

int main()
{    
    string a = "A string";
    string b = "B string";

    my_swap<string>(a, b); //build 
    my_swap(a, b); //runtime 

    std::cout << "Hello World!\n";
    /*
    max <int>(5, 6);
    max<double>(5.2, 6.3);
    max<char>('a', 'b');
    std::string str1 = "hello";
    std::string str2 = "hellow";
    //max<std::string>(str1, str2);
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
