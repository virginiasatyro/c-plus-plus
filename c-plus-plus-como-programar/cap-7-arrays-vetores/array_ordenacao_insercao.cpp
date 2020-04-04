/***********************************************************************************
 * File: array_ordenacao_insercao.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Este programa classifica (ordena) valores de um array em ordem crescente.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int arraySize = 10; 
    int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int insert; // armazena variável a ser inserida 

    cout << "Unsorted array:\n";

    // gera saída do array original 
    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    // classificação por inserção
    for(int next = 1; next < arraySize; next++)
    {
        insert = data[next]; // armazena o valor no elemento atual

        int moveItem = next; // inicializa a localização para colocar elemento 

        // procura ir pra localização em que colocar o elemento atual
        while ((moveItem > 0) && (data[moveItem - 1] > insert))
        {
            data[moveItem] = data[moveItem - 1];
            moveItem--;
        }
        data[moveItem] = insert;
    }

    cout << "\nSorted array:\n";

    // gera saída do array sorted 
    for(int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    cout << endl;

    return 0;
}

/*
Unsorted array:
  34  56   4  10  77  51  93  30   5  52
Sorted array:
   4   5  10  30  34  51  52  56  77  93
*/