/***********************************************************************************
 * File: while.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * While loop test. Do while loop test.
***********************************************************************************/

#include <iostream> 
using std::cout;
using std::endl;

int main()
{
    int counter = 1; 

    while (counter <= 10)
    {
        cout << counter << " ";
        counter++;
    }

    cout << endl;

    int counter2 = 1; // inicializa o contador 

    do
    {
        cout << counter2 << " "; // exibe contador 
        counter2++; // incrementa contador 
    } while(counter2 <= 10);

    cout << endl;

    return 0;
}