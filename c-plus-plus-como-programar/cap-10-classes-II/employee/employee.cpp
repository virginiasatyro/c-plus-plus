/***********************************************************************************
 * File: employee.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro para a classe Employee.
***********************************************************************************/

#include <iostream>
#include <cstring>

#include "employee.h"

using namespace std;

// define e inicializa o membro de dados static no escopo de arquivo
int Employee::count = 0;

// define a função-membro static que retorna o número de 
// objetos Employee instanciados 
int Employee::getCount()
{
    return count;
} // função static

// construtor aloca dinamicamente espaço para o nome e o 
// sobrenome e usa strcpy para copiar o nome e o sobrenome
// para o objeto
Employee::Employee(const char * const first, const char * const last)
{
    firstName = new char[strlen(first) + 1];
    strcpy(firstName, first);

    lastName = new char[strlen(last) + 1];
    strcpy(lastName, last);

    count++; // incrementa contagem estática de empregados 

    cout << "Employee constructor for " << firstName
        << ' ' << lastName << " called." << endl;
}

// o destrutor desaloca memória dinamicamente alocada
Employee::~Employee()
{
    cout << "~Employee() called for " << firstName
        << ' ' << lastName << endl;

    delete [] firstName; // libera memória
    delete [] lastName; // libera memória 

    count--; // decrementa contagem estática de empregados
}

// retorna nome do empregado 
const char *Employee::getFirstName() const
{
    // const antes do tipo de retorno impede que o cliente modifique
    // dados private; o cliente deve copiar a string retornada antes 
    // de o destrutor excliur o armazenamento para impedir um ponteiro indefinido
    return firstName;
}

const char *Employee::getLastName() const
{ 
    return lastName;
}