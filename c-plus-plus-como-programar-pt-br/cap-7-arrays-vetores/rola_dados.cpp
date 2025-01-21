/***********************************************************************************
 * File: rola_dados.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Rola um dado de seis lados 6000000 vezes.
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int arraySize = 7; // ignora o elemento 0
    int frequency[arraySize] = {0};

    srand(time(0));

    for (int roll = 0; roll <= 6000000; roll++)
        frequency[1 + rand() % 6]++;

    cout << "Face" << setw(13) << "Frequency" << endl;

    for(int face = 1; face < arraySize; face++)
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    
    return 0;
}

/*
Face    Frequency
   1      1000837
   2       999070
   3       999300
   4      1001783
   5      1000044
   6       998967
*/