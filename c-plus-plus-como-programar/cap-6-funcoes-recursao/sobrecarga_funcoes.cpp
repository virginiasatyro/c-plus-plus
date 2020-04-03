/***********************************************************************************
 * File: sobrecarga_funcoes.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Funcoes sobrecarregadas. 
***********************************************************************************/

#include <iostream>

using namespace std;

// funcao square para valores int 
int square(int x)
{
    cout << "square of integer " << x << " is ";
    return x * x;
}

// funcao square para valores double 
double square(double y)
{
    cout << "square of double " << y << " is ";
    return y * y;
}

int main()
{
    cout << square(7) << endl; // 49 
    cout << square(7.5) << endl; // 56.25

    return 0;
}