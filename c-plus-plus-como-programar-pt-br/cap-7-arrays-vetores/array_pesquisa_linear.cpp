/***********************************************************************************
 * File: array_pesquisa_linear.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Pesquisa linear de um array.
***********************************************************************************/

#include <iostream>

using namespace std;

int linearSearchKey(const int[], int, int);

int main()
{   
    const int arraySize = 100; // tamanho do array
    int a[arraySize];
    int searchKey;

    for(int i = 0; i < arraySize; i++)
        a[i] = 2 * i; // cria alguns dados 

    cout << "Enter integer search key: ";
    cin >> searchKey;

    // tenta localizar searchKey no array
    int element = linearSearchKey(a, searchKey, arraySize);

    if(element != -1)
        cout << "Found value in element " << element << endl;
    else 
        cout << "Value not found" << endl;

    return 0;
}

// compara chave com cada elemento do array
int linearSearchKey(const int array[], int key, int sizeOfArray)
{
    for(int j = 0; j < sizeOfArray; j++)
        if(array[j] == key)
            return j;
   
    return -1;
}