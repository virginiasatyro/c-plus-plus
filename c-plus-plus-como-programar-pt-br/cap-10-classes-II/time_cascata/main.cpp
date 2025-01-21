/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Colocando chamadas de funções-membro em cascata com o ponteiro this.
***********************************************************************************/

#include <iostream> 

#include "time.h"

using namespace std;

int main()
{
    Time t; // cria objeto

    // chamada de funções em cascata
    t.setHour(18).setMinute(30).setSecond(22);

    // gera saída da hora nos formatos universais e padrão
    cout << "Universal time: ";
    t.printUniversal();

    cout << "\nStandard time: ";
    t.printStandard();

    cout << "\n\nNew standard time: ";

    // chamadas de função em cascata
    t.setTime(20, 20, 20).printStandard();
    cout << endl;

    return 0;
}

/*
Universal time: 18:30:22
Standard time: 6:30:22 PM

New standard time: 8:20:20 PM
*/