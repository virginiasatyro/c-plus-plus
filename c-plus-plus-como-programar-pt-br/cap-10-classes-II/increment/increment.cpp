/***********************************************************************************
 * File: increment.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Increment - demonstram o uso do inicializador de membro para inicializar uma 
 * constante de um tipo de dados predefinido. 
***********************************************************************************/

#include <iostream>

#include "increment.h"

using namespace std;

// construtor
Increment::Increment(int c, int i)
    : count(c), // inicializador para membro não-const
      increment(i) // inicializador requerido para membro const
{
    // corpo vazio
}

// imprime valores de count e increment
void Increment::print() const
{
    cout << "count = " << count << ", increment = " << increment << endl;
}