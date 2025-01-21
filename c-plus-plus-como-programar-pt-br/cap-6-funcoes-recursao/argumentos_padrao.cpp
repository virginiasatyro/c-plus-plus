/***********************************************************************************
 * File: argumentos_padrao.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * AUtilizando argumentos-padrão.
***********************************************************************************/

#include <iostream>

using namespace std;

// protótipo da função que especifica argumentos-padrao
int boxVolume(int lenght = 1, int width = 1, int height = 1);

int main()
{
    cout << "The default box volume is: " << boxVolume() << endl; // 1

    cout << "The volume of a box with length 10, width 1 and height 1: " << boxVolume(10) << endl; // 10

    cout << "The volume of a box with length 10, width 5 and height 1: " << boxVolume(10, 5) << endl; // 50 

    cout << "The volume of a box with length 10, width 5 and height 2: " << boxVolume(10, 5, 2) << endl; // 100
 
    return 0;
}

int boxVolume(int lenght, int width, int height)
{
    return lenght * width * height;
}
