/***********************************************************************************
 * File: break_continue.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Intruções break e continue
***********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int count;

    for(count = 1; count <= 10; count++)
    {
        if(count == 5)
            break; // quebra o loop somente se x for 5

        cout << count << " ";
    } // 1 2 3 4 

    cout << "\nBroke out of loop at count = " << count << endl;

    for(count = 1; count <= 10; count++)
    {
        if(count == 5) // se count for 5,
            continue; // pula o código restante do loop

        cout << count << " ";
    } // 1 2 3 4 6 7 8 9 10 

    cout << "\nUsed continue to skip printing 5" << endl;

    return 0;
}