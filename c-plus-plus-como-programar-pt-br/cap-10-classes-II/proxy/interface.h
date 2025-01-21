/***********************************************************************************
 * File: interface.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Arquivos de cabeçalho da classe Interface.
 * O cliente vê esse código-fonte, mas o código-fonte não revela o layout de dados 
 * da classe Implementation. 
***********************************************************************************/

#ifndef INTERFACE_H
#define INTERFACE_H

// declaração de classe antecipada requerida pel linha 23
class Implementation;

class Interface
{
private:
    // requer a declaração antecipada anterior (linha 17)
   Implementation *ptr; 

public:
    Interface(int); // construtor
    void setValue(int); // mesma interface public que 
    int getValue() const; // a classe Implementation tem
    ~Interface(); // destrutor
};

#endif // INTERFACE_H