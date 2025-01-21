/***********************************************************************************
 * File: template_teste.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Programa de teste do template de função maximum. 
***********************************************************************************/

#include <iostream>
#include "template_maximum.h"

using namespace std;


int main()
{
    // demonstra maximum com valores int 
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    // invoca a versão int de maximum
    cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;

    // demonstra maximum com valores double 
    double double1, double2, double3;

    cout << "Input three double values: ";
    cin >> double1 >> double2 >> double3;

    // invoca a versão double de maximum
    cout << "The maximum double value is: " << maximum(double1, double2, double3) << endl;

    // demonstra maximum com valores char 
    char char1, char2, char3;

    cout << "Input three char characters: ";
    cin >> char1 >> char2 >> char3;

    // invoca a versao char de maximum
    cout << "The maximum character value is: " << maximum(char1, char2, char3) << endl;

    return 0;
}

