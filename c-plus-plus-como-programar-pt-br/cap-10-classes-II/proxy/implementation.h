/***********************************************************************************
 * File: implementation.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Arquivo de cabeçalho para a classe Implementation.
***********************************************************************************/

#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

class Implementation
{
private:
    int value; // dados que gostaríamos de ocultar do cliente 

public:
    // CONSTRUTOR
    Implementation(int v) : value(v) // inicializa value como v
    {
        //
    }

    // configura valor como v
    void setValue(int v)
    {
        value = v; // deve validar v
    }

    // retorna value
    int getValue() const 
    {
        return value;
    }
};

#endif // IMPLEMENTATION_H