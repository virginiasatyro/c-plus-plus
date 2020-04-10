/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Programa para testar a classe Increment. 
***********************************************************************************/

#include <iostream>

#include "increment.h"

using namespace std;

int main()
{
    Increment value(10, 5);

    cout << "Before incrementing: ";
    value.print();

    for(int j = 1; j <= 3; j++)
    {
        value.addIncrement();
        cout << "After increment " << j << ": ";
        value.print();
    }
    
    return 0;
}