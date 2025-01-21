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

void selectionSort(int [], const int, bool (*)(int, int));
void swap(int * const, int * const);
bool ascending(int, int);
bool descending(int, int);

int main()
{
    const int arraySize = 10;
    int order; // 1 - crescente, 2 - decrescente 
    int counter; // índice do array
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Enter 1 to sort in ascending order,\n"
        << "Enter 2 to sort in descending order: ";
    cin >> order;
    cout << "\nData items in original order\n";

    // gera saída do array original
    for(counter = 0; counter < arraySize; counter++)
        cout << setw(4) << a[counter];

    // classifica em ordem crescente 
    if(order == 1)
    {
        selectionSort(a, arraySize, ascending);
        cout << "\nData items in ascending order.\n";
    }

    // classifica o array em ordem decrescente 
    else
    {
        selectionSort(a, arraySize, descending);
        cout << "\nData items in descending order.\n";
    }
    
    // gera a saída do array classificado
    for(counter = 0; counter < arraySize; counter++)
        cout << setw(4) << a[counter];

    cout << endl;

    return 0;
}

// classifica o array 
void selectionSort(int work[], const int size, bool (*compare)(int, int))
{
    int smallestOrLargest; 

    for(int i = 0; i < size - 1; i++)
    {
        smallestOrLargest = i; // primeiro índice do vetor restante 

        // itera para localizar o índice do menor (ou maior) elemento 
        for(int index = i + 1; index < size; index++)
            if(!(*compare)(work[smallestOrLargest], work[index]))
                smallestOrLargest = index;

        swap(&work[smallestOrLargest], &work[i]);
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

// determina se o elemento a é menor que o 
// elemento b para uma classificação em ordem crescente 
bool ascending(int a, int b)
{
    return a < b; // retorna true se a for menor que b
}

// determina se o elemento a é maior que o 
// elemento b para uma classificação em ordem decrescente 
bool descending(int a, int b)
{
    return a > b;
}
/*
Data items in original order
   2   6   4   8  10  12  89  68  45  37
Data items in ascending order
   2   4   6   8  10  12  37  45  68  89
*/