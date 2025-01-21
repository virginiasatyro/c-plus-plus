/***********************************************************************************
 * File: decision/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro de 2020
 * 
 * Decision making with IF, comparations 
***********************************************************************************/

#include <iostream>

using std::cout; 
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Enter two integers to compare: ";
    cin >> num1 >> num2;

    if(num1 == num2){
        cout << num1 << " == " << num2 << endl;
    }

    if(num1 != num2){
        cout << num1 << " != " << num2 << endl;
    }

    if(num1 < num2){
        cout << num1 << " < " << num2 << endl;
    }

    if(num1 > num2){
        cout << num1 << " > " << num2 << endl;
    }

    if(num1 <= num2){
        cout << num1 << " <= " << num2 << endl;
    }

    if(num1 >= num2){
        cout << num1 << " >= " << num2 << endl;
    }
}
