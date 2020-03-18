/***********************************************************************************
 * File: while.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * While loop test
***********************************************************************************/

#include <iostream> 
using std::cout;
using std::endl;

int main()
{
    int counter = 1; 

    while (counter <= 10)
    {
        cout << counter << " ";
        counter++;
    }

    cout << endl;
    return 0;
}