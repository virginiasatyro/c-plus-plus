/***********************************************************************************
 * File: ponteiros.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando os operadores & e *.
***********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a; // inteiro
    int *aPtr; // ponteiro para um inteiro

    a = 7; // atribui 7 a a
    aPtr = &a; // atribui o endereço de a ao aPtr

    cout << "The address of a is " << &a
        << "\nThe value of a aPtr is " << aPtr;
    cout << "\n\nThe value of a is " << a 
        << "\nThe value of *aPtr is " << *aPtr;
    cout << "\n\nShowing that * and & are inverses of "
        << "each other.\n &*aPtr = " << &*aPtr
        << "\n*&aPtr = " << *&aPtr << endl;

    return 0;
}

/*
The address of a is 0x7ffde70175cc
The value of a aPtr is 0x7ffde70175cc

The value of a is 7
The value of *aPtr is 7

Showing that * and & are inverses of each other.
 &*aPtr = 0x7ffde70175cc
*&aPtr = 0x7ffde70175cc
*/