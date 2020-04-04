/***********************************************************************************
 * File: array_funcoes.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Passando arrays e elementos de array individuais a funções.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void modifyArray(int [], int);
void modifyElement(int);

int main()
{
    const int arraySize = 5; // tamanho do array 
    int a[arraySize] = {0, 1, 2, 3, 4}; // inicializa array a 

    cout << "Effects of passing entire array by reference:"
    << "\n\nThe values of the original array are:\n";

    // gera saída de elementos do array original 
    for(int i = 0; i < arraySize; i++)
        cout << setw(3) << a[i];
    
    cout << endl;

    // passa o array a para modifyArray por referência 
    modifyArray(a, arraySize);
    cout << "The values of the modified array are:\n";

    // gera saída de elementos do array modificado
    for(int j = 0; j < arraySize; j++)
        cout << setw(3) << a[j];

    cout << "\n\nEffects of passing array element by value:"
    << "\n\na[3] before modifyElement: " << a[3] << endl;

    modifyElement(a[3]);
    cout << "a[3] after modifyElement: " << a[3] << endl;

    return 0;
}

// função modifyArray, "b" aponta o array original "a" na memória
void modifyArray(int b[], int sizeOfArray)
{
    // multiplica cada elemento do array por 2
    for(int k = 0; k < sizeOfArray; k++)
        b[k] *= 2;
}

// "e" é uma cópia local do elemento do array a[3] passado de main
void modifyElement(int e)
{
    // multiplica o parâmetro por 2 
    cout << "Value of element int modifyElement: " << (e *= 2) << endl; 
}

/*
Effects of passing entire array by reference:

The values of the original array are:
  0  1  2  3  4
The values of the modified array are:
  0  2  4  6  8
Effects of passing array element by value:

a[3] before modifyElement: 6
Value of element int modifyElement: 12
a[3] after modifyElement: 6
*/