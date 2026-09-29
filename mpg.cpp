/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    double gallons = 16;
    int travel = 312;
    double mpg = travel / gallons;
    std::cout << "The car gets " << mpg << " miles per gallon" << std::endl;
    return 0;
}