/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Demonstrando uma função utilitária. 
***********************************************************************************/

#include "SalesPerson.h"

int main()
{
    SalesPerson s; // cria objeto

    s.getSalesFromUser();
    s.printAnnualSales();

    return 0;
}