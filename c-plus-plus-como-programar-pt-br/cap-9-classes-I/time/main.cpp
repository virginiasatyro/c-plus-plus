/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Programa para testar a classe Time. 
***********************************************************************************/

#include <iostream>

#include "time.h"

using namespace std;

int main()
{
    Time t1; // configuração padrão - 0
    Time t2(2); // hora especificada 
    Time t3(21, 34); // hora e minuto especificados 
    Time t4(12, 25, 42); // hora, minuto e segundo
    Time t5(27, 74, 99); // valores inválidos especificados

    cout << "Constructed with:\n\nall arguments defaulted\n";
    t1.printUniversal();
    cout << endl;
    t1.printStandard();

    cout << "\n\nt2: hour specified; minute and second defaulted\n";
    t2.printUniversal();
    cout << endl;
    t2.printStandard();

    cout << "\n\nt3: hour and minute specified\n";
    t3.printUniversal();
    cout << endl;
    t3.printStandard();

    cout << endl;

    return 0;

    /*
    Constructed with:

    all arguments defaulted
    00:00:00
    12:00:00 AM

    t2: hour specified; minute and second defaulted
    02:00:00
    2:00:00 AM

    t3: hour and minute specified
    21:34:00
    9:34:00 PM
    */
}

/*Time t; // instancia o objeto t da classe Time 

    // gera saída de valores iniciais do objeto Time t
    cout << "The initial universal time is: ";
    t.printUniversal(); // 00:00:00
    cout << "\nThe initial standart time is: ";
    t.printStandard(); // 12:00:00 AM 

    t.setTime(13, 27, 6); // muda a hora 

    // gera saída de novos valores 
    cout << "\nThe universal time after setTime is: ";
    t.printUniversal(); 
    cout << "\nThe standart time after setTime is: ";
    t.printStandard(); 

    t.setTime(99, 99, 99);

    cout << "\nAfter attempting invalid settings:"
        << "\nUniversal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl;
*/
/*
The initial universal time is: 00:00:00
The initial standart time is: 12:00:00 AM
The universal time after setTime is: 13:27:06
The standart time after setTime is: 1:27:06 PM
After attempting invalid settings:
Universal time: 00:00:00
Standard time: 12:00:00 AM
*/