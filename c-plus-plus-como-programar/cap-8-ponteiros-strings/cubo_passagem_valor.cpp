/***********************************************************************************
 * File: cubo_passagem_valor.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Eleva uma variável ao cubo utilizando passagem por valor.
***********************************************************************************/

#include <iostream>

using namespace std;

int cubeByValue(int); 

int main()
{
    int number = 5;

    cout << "The original value of number is " << number;

    number = cubeByValue(number); // passa number por valor 
    cout << "\nThe new value of number is " << number << endl;

    return 0;
}

// calcula e retorna o cubo do argumento inteiro
int cubeByValue(int n)
{
    return n * n * n;
}

/*
The original value of number is 5
The new value of number is 125
*/