/***********************************************************************************
 * File: incremention/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * Incremention test
***********************************************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int c;

    c = 5; 
    cout << c << endl;   // 5 
    cout << c++ << endl; // 5 
    cout << c << endl;   // 6 

    cout << endl;

    c = 5;  
    cout << c << endl;   // 5
    cout << ++c << endl; // 6 
    cout << c << endl;   // 6
 
    return 0;
}