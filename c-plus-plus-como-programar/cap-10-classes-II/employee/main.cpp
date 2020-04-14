/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Driver para testar a classe Employee.
***********************************************************************************/

#include <iostream>

#include "employee.h"

using namespace std;

int main()
{
    // utiliza o nome da classe e o operador de resolução de escopo binário para 
    // acessar a função static number getCount
    cout << "Number of emplyees before instantiation of any objects is " 
        << Employee::getCount() << endl; 

    // utiliza new para criar dinamicamente dois novos Employees
    // o operador new também chama o construtor do objeto 
    Employee *e1Ptr = new Employee("Susan", "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    // chama getCount no primeiro objeto Employee 
    cout << "Number of employees after objects are instantiated is "
        << e1Ptr->getCount();

    cout << "\n\nEmployee 1: "
        << e1Ptr->getFirstName() << " " << e1Ptr->getLastName()
        << "\nEmployee 2: "
        << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << endl;

    delete e1Ptr; // desaloca memória
    e1Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre
    delete e2Ptr;
    e2Ptr = 0;

    // não existe mais nenhum objeto
    cout << "Number of employees after objects are deleted is " << Employee::getCount() << endl;

    return 0;
}