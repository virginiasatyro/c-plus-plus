/***********************************************************************************
 * File: increment.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definição da classe Increment. 
***********************************************************************************/

#ifndef _INCREMENT_H
#define _INCREMENT_H

class Increment
{
private:
    int count;
    const int increment; // membro de dados const 

public:
    Increment(int c = 0, int i = 1); // construtor-padrão

    // definição da função addIncrement 
    void addIncrement()
    {
        count += increment;
    }
    void print() const; // imprime count e increment
};

#endif // _INCREMENT_H