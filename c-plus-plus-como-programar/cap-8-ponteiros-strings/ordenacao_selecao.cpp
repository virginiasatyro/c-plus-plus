/***********************************************************************************
 * File: ordenacao_selecao.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Coloca valore em um array, classifica os valores em ordem crescente e imprime
 * o array resultante.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void selectionSort(int * const, const int);
void swap(int * const, int * const);

int main()
{
    const int arraySize = 10;
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Data items in original order\n";

    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << a[i];

    selectionSort(a, arraySize); // classifica array

    cout << "\nData items in ascending order\n";

    for(int j = 0; j < arraySize; j++)
        cout << setw(4) << a[j];

    cout << endl;

    return 0;
}

// classifica o array 
void selectionSort(int * const array, const int size)
{
    int smallest; // índice do menor elemento

    for(int i = 0; i < size - 1; i++)
    {
        smallest = i; 

        for(int index = i + 1; index < size; index++)
            if(array[index] < array[smallest])
                smallest = index;
        swap(&array[i], &array[smallest]);
    }
}

// troca os valores nas posições de memória para os quais 
// element1Ptr e element2Ptr apontem 
void swap(int * const element1Ptr, int * const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

/*
Data items in original order
   2   6   4   8  10  12  89  68  45  37
Data items in ascending order
   2   4   6   8  10  12  37  45  68  89
*/