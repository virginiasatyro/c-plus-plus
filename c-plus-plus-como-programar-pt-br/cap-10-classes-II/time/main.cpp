/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro para a classe Time.
***********************************************************************************/
#include <iostream>

#include "time.h"

using namespace std;

int main()
{
    Time wakeUp(6, 45, 0); // objeto constante 
    const Time noon(12, 0, 0); // objeto não-constante

    wakeUp.setHour(18);

    wakeUp.printUniversal();
    cout << endl;
    noon.printUniversal();
    cout << endl;

    // noon.setHour(12); ERRO

    noon.getMinute();
    noon.printUniversal();

    // noon.printStandard(); ERRO

    return 0;
}