/***********************************************************************************
 * File: passagem_valor_referencia.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Comparando passagem por valor e por referência com as referências.
***********************************************************************************/

#include <iostream>

using namespace std;

int squareByValue(int); // passagem por valor
void squareByReference(int &); // passagem por referência

int main()
{
    int x = 2;
    int y = 4;

    cout << "x = " << x << " before squareByValue" << endl; // 2 
    cout << "Value returned: " << squareByValue(x) << endl; // 4 
    cout << "x = " << x << " after squareByValue" << endl; // 2

    cout << "y = " << y << " before squareByReference" << endl; // 4 
    squareByReference(y);
    cout << "y = " << y << " after squareByReference" << endl; // 16

    return 0;
}

int squareByValue(int number)
{
    return number * number;
}

void squareByReference(int &numberRef)
{
    numberRef *= numberRef;
}