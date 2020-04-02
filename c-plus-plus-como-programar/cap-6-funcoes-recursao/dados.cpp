/***********************************************************************************
 * File: dados.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Lança um dado de seis lados 6.000.000 vezes.
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0, frequency5 = 0, frequency6 = 0; 
    int face; // armazena valor lançado mais recentemente

    srand(29899); // semeia o gerador de números aleatórios

    for(int roll = 1; roll <= 6000000; roll++)
    {
        face = 1 + rand() % 6;

        switch(face)
        {
            case 1:
                ++frequency1; 
                break;
            case 2:
                ++frequency2; 
                break;
            case 3:
                ++frequency3; 
                break;
            case 4:
                ++frequency4; 
                break;
            case 5:
                ++frequency5; 
                break;
            case 6:
                ++frequency6; 
                break;
            default:
                cout << "!" << endl;
        }
    }
   
    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << frequency1
    << "\n   2" << setw(13) << frequency2
    << "\n   3" << setw(13) << frequency3
    << "\n   4" << setw(13) << frequency4
    << "\n   5" << setw(13) << frequency5
    << "\n   6" << setw(13) << frequency6 << endl;

    return 0;
}