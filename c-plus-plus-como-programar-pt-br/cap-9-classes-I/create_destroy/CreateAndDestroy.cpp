/***********************************************************************************
 * File: CreateAndDestroy.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro da classe CreateAndDestroy. 
***********************************************************************************/

#include <iostream>

#include "CreateAndDestroy.h"

// construtor
CreateAndDestroy::CreateAndDestroy(int ID, string messageString)
{
    objectId = ID; // configura número
    message = messageString; // configura mensagem

    cout << "Object " << objectId << "  constructor runs    " << message << endl;
}

// destrutor 
CreateAndDestroy::~CreateAndDestroy()
{
    // gera saída de nova linha para certos objetos
    cout << (objectId == 1 || objectId == 6 ? "\n" : "");

    cout << "Object " << objectId << "  destructor runs   " << message << endl;
}