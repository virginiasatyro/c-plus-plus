/***********************************************************************************
 * File: inicializando_arrays.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Inicializando um array.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[10]; // n é um array de 10 inteiros

    for(int i = 0; i < 10; i++)
        n[i] = 0; // configura elemento na posição i como 0

    cout << "Element " << setw(13) << "Value " << endl;

    // gera saída do valor de cada elemento do array
    for(int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << n[j] << endl;

    /*
    Element        Value 
        0            0
        1            0
        2            0
        3            0
        4            0
        5            0
        6            0
        7            0
        8            0
        9            0
    */

    int n2[10] = {32, 23, 54, 75, 21, 23, 12, 55, 98, 78};

    cout << "Element " << setw(13) << "Value " << endl;

    for(int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << n2[j] << endl;
    
    /*
    Element        Value 
      0           32
      1           23
      2           54
      3           75
      4           21
      5           23
      6           12
      7           55
      8           98
      9           78
    */

    // variável constante pode ser utilizada para espeficicar o tamanho do array
    const int arraySize = 10;
    int s[arraySize]; // array de 10 elementos 

    for(int i = 0; i < arraySize; i++)
        s[i] = 2 + 2 * i;

    cout << "Element " << setw(13) << "Value " << endl;

    for(int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << s[j] << endl;

    /*
    Element        Value 
      0            2
      1            4
      2            6
      3            8
      4           10
      5           12
      6           14
      7           16
      8           18
      9           20
    */

    // Soma dos elementos de um array 
    int a[arraySize] = {32, 23, 54, 75, 21, 23, 12, 55, 98, 78};
    int total = 0;

    for(int i = 0; i < arraySize; i++)
        total += a[i];

    cout << "\nTotal of array elements: " << total << endl; // 471

    return 0;
}

