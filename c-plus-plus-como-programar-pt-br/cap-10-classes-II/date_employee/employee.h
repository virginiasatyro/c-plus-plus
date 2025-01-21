/***********************************************************************************
 * File: date.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Funções membro definidas em employee.cpp.
***********************************************************************************/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "date.h"

class Employee
{
private:
    char firstName[25];
    char lastName[25];
    const Date birthDate; // composição: objeto-membro
    const Date hireDate; // composição: objeto-membro

public:
    Employee(const char * const, const char * const, const Date &, const Date &);
    void print() const;
    ~Employee(); // confirmar ordem de destruição
};

#endif