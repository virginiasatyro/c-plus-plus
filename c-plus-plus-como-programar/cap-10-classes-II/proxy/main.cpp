/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Ocultando dados private de uma classe com a classe proxy.
***********************************************************************************/

#include <iostream>

#include "interface.h"

using namespace std;

int main()
{
    Interface i(5); // cria objeto Interface

    cout << "Interface contains: " << i.getValue()
        << " before setValue" << endl;

    i.setValue(10);

    cout << "Interface constains: " << i.getValue()
        << " after setValue" << endl;

    return 0;
}

/*
Interface contains: 5 before setValue
Interface constains: 10 after setValue
*/