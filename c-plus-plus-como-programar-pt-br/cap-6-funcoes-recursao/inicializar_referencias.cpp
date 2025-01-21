/***********************************************************************************
 * File: inicializar_referencias.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * As referências devem ser inicializadas. 
***********************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int x = 3;
    int &y = x;

    cout << "x = " << x << endl << "y = " << y << endl;
    // x = 3 y = 3
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;
    // x = 7 y = 7

    return 0;
}

