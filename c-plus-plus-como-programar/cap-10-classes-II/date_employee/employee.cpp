/***********************************************************************************
 * File: employee.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro da classe Employee.
***********************************************************************************/

#include <iostream> 
#include <cstring>

#include "employee.h"
#include "date.h"

using namespace std;

// construtor usa lista de inicializadores de membro para passar valores de inicializadores
// para construtores dos objetos-membro birthDate e hireDate;
// Isso invoca o chamado 'construtor de cópia padrão'.
Employee::Employee(const char * const first, const char * const last, const Date &dateOfBirth, const Date &dateOfHire)
    : birthDate(dateOfBirth), hireDate(dateOfHire) // inicializa birthDate e hireDate 
{
    // copia primeiro para first name 
    int lenght = strlen(first);
    lenght = (lenght < 25 ? lenght : 24);
    strncpy(firstName, first, lenght);
    firstName[lenght] = '\0';

    // copia por último para lastName 
    lenght = strlen(last);
    lenght = (lenght < 25 ? lenght : 24);
    strncpy(lastName, last, lenght);
    lastName[lenght] = '\0';

    // gera saída do objeto Employee 
    cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

// imprime objeto Employee
void Employee::print() const
{
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}

// destrutor 
Employee::~Employee()
{
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}