/***********************************************************************************
 * File: employee.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definição da classe employee.
***********************************************************************************/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
private:
    char *firstName;
    char *lastName;

    // dados static
    static int count; // número de objetos instanciados

public:
    Employee(const char * const, const char * const); // construtor
    ~Employee(); // destrutor
    const char *getFirstName() const; // retorna o nome 
    const char *getLastName() const;

    // funções-membro static 
    static int getCount(); // retorna número de objetos instanciados
};

#endif // EMPLOYEE_H