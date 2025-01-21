/***********************************************************************************
 * File: funcao_argumento_void.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Funções que não aceitam argumentos.
***********************************************************************************/

#include <iostream>

using namespace std;

void function1(); // não aceita argumentos 
void function2();

int main()
{
    function1();
    function2();

    return 0;
}

void function1()
{
    cout << "function1 takes no arguments" << endl;
}

void function2()
{
    cout << "function2 takes no arguments" << endl;
}