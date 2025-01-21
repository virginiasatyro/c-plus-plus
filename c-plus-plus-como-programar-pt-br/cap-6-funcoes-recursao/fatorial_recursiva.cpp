/***********************************************************************************
 * File: fatorial_recursiva.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Testando a função fatorial recursiva. 
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long);

int main()
{
    for(int counter = 0; counter <= 10; counter++)
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;

    return 0;
}

// definição recursiva da função fatorial
unsigned long factorial(unsigned long number)
{
    if(number <= 1) // caso base 
        return 1;
    else // passo de recursão
        return number * factorial(number - 1);
}