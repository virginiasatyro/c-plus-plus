/***********************************************************************************
 * File: array_estatico.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Arrays esstáticos são inicializados com zero.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void staticArrayInit(void); 
void automaticArrayInit(void);

int main()
{   
    cout << "First call to each function: \n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function: \n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;

    return 0;
}

void staticArrayInit(void)
{
    // inicializa elementos com 0 na primeira vez que a função é chamada
    static int array1[3]; // array local estático - guarda os valores para a próxima chamada de função!!!

    cout << "\nValues on entering staticArrayInit:\n";

    // gera saída do conteúdo de array1
    for(int i = 0; i < 3; i++)
        cout << "array1[" << i << "] = " << array1[i] << " ";

    cout << "\nValues on existing staticArrayInit:\n";

    // modifica array e gera nova saída
    for(int j = 0; j < 3; j++)
        cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
}

void automaticArrayInit(void)
{
    int array2[3] = {1, 2, 3}; // array local automático

    cout << "\nValues on entering automaticArrayInit:\n";

    for(int i = 0; i < 3; i++)
        cout << "array2[" << i << "] = " << array2[i] << " ";

    cout << "\nValues on existing automaticArrayInit:\n";

    // modifica array e gera nova saída
    for(int j = 0; j < 3; j++)
        cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";
    
}

/*
First call to each function: 

Values on entering staticArrayInit:
array1[0] = 0 array1[1] = 0 array1[2] = 0 
Values on existing staticArrayInit:
array1[0] = 5 array1[1] = 5 array1[2] = 5 
Values on entering automaticArrayInit:
array2[0] = 1 array2[1] = 2 array2[2] = 3 
Values on existing automaticArrayInit:
array2[0] = 6 array2[1] = 7 array2[2] = 8 

Second call to each function: 

Values on entering staticArrayInit:
array1[0] = 5 array1[1] = 5 array1[2] = 5 
Values on existing staticArrayInit:
array1[0] = 10 array1[1] = 10 array1[2] = 10 
Values on entering automaticArrayInit:
array2[0] = 1 array2[1] = 2 array2[2] = 3 
Values on existing automaticArrayInit:
array2[0] = 6 array2[1] = 7 array2[2] = 8 
*/