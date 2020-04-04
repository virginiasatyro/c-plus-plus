/***********************************************************************************
 * File: array_multidimensional.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Inicialização de arrays multidimensionais.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void printArray(const int [][3]);

int main()
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array2[2][3] = {1, 2, 3, 4, 5};
    int array3[2][3] = {{1, 2}, {4}};

    cout << "Values in array1 by row are:" << endl;
    printArray(array1);

    cout << "Values in array2 by row are:" << endl;
    printArray(array2);

    cout << "Values in array3 by row are:" << endl;
    printArray(array3);

    return 0;
}

// gera saída do array com duas linhas e três colunas
void printArray(const int a[][3])
{
    // faz loop pelas linhas do array 
    for(int i = 0; i < 2; i++)
    {
        // faz loop pelas colunas
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

/*
Values in array1 by row are:
1 2 3 
4 5 6 
Values in array2 by row are:
1 2 3 
4 5 0 
Values in array3 by row are:
1 2 0 
4 0 0 
*/