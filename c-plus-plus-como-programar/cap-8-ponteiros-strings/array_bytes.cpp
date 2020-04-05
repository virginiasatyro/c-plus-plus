/***********************************************************************************
 * File: array_bytes.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Operador sizeof quando utilizado em um nome de array retora o número de bytes.
***********************************************************************************/

#include <iostream>

using namespace std;

size_t getSize(double *);

int main()
{
    double array[20]; // 20 doubles - 160 bytes no sistema

    cout << "The number of bytes in the array is " << sizeof(array);

    cout << "\nThe number of bytes returned by getSize is " << getSize(array) << endl;
    
    return 0;
}

// retorna o tamanho de ptr 
size_t getSize(double *ptr)
{
    return sizeof(ptr);
}

/*
The number of bytes in the array is 160
The number of bytes returned by getSize is 8
*/