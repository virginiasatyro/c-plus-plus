/***********************************************************************************
 * File: cubo_passagem_referencia.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Eleva uma variável ao cubo utilizando passagem por valor.
***********************************************************************************/

#include <iostream>

using namespace std;

void cubeByReference(int *); 

int main()
{
    int number = 5;

    cout << "The original value of number is " << number;

    cubeByReference(&number); // passa o endereço de number 

    cout << "\nThe new value of number is " << number << endl;

    return 0;
}

// calcula o cubo de *nPtr, modifica a variável number em main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}

/*
The original value of number is 5
The new value of number is 125
*/