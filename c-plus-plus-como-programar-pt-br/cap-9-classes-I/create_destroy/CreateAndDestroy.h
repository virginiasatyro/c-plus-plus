/***********************************************************************************
 * File: CreateAndDestroy.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Funções-membro definidas em CreateAndDestroy.cpp. 
***********************************************************************************/

#ifndef CREATE_H
#define CREATE_H

#include <string>

using namespace std;

class CreateAndDestroy
{
private:
    int objectId; // número do ID do objeto
    string message; // mensagem descrevendo o objeto 

public:
    CreateAndDestroy(int, string); // construtor 
    ~CreateAndDestroy(); // destrutor 
};

#endif // CREATE_H