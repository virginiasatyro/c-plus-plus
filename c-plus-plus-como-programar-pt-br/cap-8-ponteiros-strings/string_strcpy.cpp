/***********************************************************************************
 * File: string_strcpy.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando strcpy e strncpy.
***********************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char x[] = "Happy Birthday to You"; // comprimento 21 
    char y[25];
    char z[15];

    strcpy(y, x); // copia conteúdo de x para y

    cout << "The string in array x is: " << x
        << "\nThe string in array y is: " << y << '\n';

    // copia os primeiros 14 caracteres de x para z
    strncpy(z, x, 14); // não copia o caractere nulo
    z[14] = '\0'; // acrescenta '\0' ao conteúdo de z

    cout << "The string in array z is: " << z << endl;

    return 0;
}

/*
The string in array x is: Happy Birthday to You
The string in array y is: Happy Birthday to You
The string in array z is: Happy Birthday
*/