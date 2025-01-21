/***********************************************************************************
 * File: numeros_aleatorios.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Números aleatórios com rand.
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib> // protótipo de função para rand 

using namespace std;

int main()
{
    for(int counter = 1; counter <= 20; counter++)
    {
        // escolhe um número aleatório de 1 a 6 
        cout << setw(10) << (1 + rand() % 6);

        // se o contador for divisível por 5, inicia uma nova linha de saída
        if(counter % 5 == 0)
            cout << endl;
    }
    return 0;
}

