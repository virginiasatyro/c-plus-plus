/***********************************************************************************
 * File: fibonacci_recursiva.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Testando a função fatorial recursiva. 
***********************************************************************************/

#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long); 

int main()
{
    for(int counter = 0; counter < 10; counter++)
        cout << "fibonacci( " << counter << " ) = " << fibonacci(counter) << endl;

    // exibe valores fibonacci mais altos 
    cout << "fibonacci( 20 ) = " << fibonacci(20) << endl;
    cout << "fibonacci( 40 ) = " << fibonacci(40) << endl;

    return 0;
}

unsigned long fibonacci(unsigned long number)
{
    if((number == 0) || (number == 1)) // casos base 
        return number;
    else 
        return fibonacci(number - 1) + fibonacci(number - 2);
}

