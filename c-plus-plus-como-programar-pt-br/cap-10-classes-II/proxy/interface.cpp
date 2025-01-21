/***********************************************************************************
 * File: interface.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Implementação da classe Interface - o cliente recebe somente esse arquivo como 
 * código-objeto pré-compilado, mantendo a implementação oculta.
***********************************************************************************/

#include "interface.h"
#include "implementation.h"

// construtor
Interface::Interface(int v) : ptr(new Implementation(v)) // inicializa ptr para apontar para um novo objeto Implementation
{
    //
}

// chama a função setValue de Implementation
void Interface::setValue(int v)
{
    ptr->setValue(v);
}

// chama a função getValue de Implementation
int Interface::getValue() const
{
    return ptr->getValue();
}

// destrutor 
Interface::~Interface()
{
    delete ptr;
}