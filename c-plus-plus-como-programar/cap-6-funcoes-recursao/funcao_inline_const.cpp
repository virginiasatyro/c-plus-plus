/***********************************************************************************
 * File: funcao_inline_const.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Utilizando uma função inline para calcular o volume de um cubo.
***********************************************************************************/

#include <iostream>

using namespace std;

inline double cube(const double side)
{
    return side * side; // calcula o cubo 
}

int main()
{
    double sideValue;
    cout << "Enter the side length of your cube: " << endl;
    cin >> sideValue;

    cout << "Volume of the cube: " << cube(sideValue) << endl;

    return 0;
}
