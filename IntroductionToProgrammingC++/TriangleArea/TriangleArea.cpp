// TriangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//По дадени 3 страни на триъгилник намерете периметъра и лицето му.


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::sqrt;



int main()
{
    int a, b, c;
    a = 4;
    b = 13;
    c = 15;
    int p = (a+b+c)/2;
    int area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << area;

}

