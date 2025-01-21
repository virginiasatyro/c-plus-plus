/***********************************************************************************
 * File: operador_unario.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Utilizando o operador unário de resolução de escopo. 
***********************************************************************************/

#include <iostream>

using namespace std;

int number = 7; // variável global chamada number 

int main()
{
    double number = 10.5; // variável local chamada number

    cout << "Local value of number: " << number << endl; // 10.5 
    cout << "Global value of number: " << ::number << endl; // 7

    return 0;
}