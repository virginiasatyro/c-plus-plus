/***********************************************************************************
 * File: SalesPerson.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Funções-membro definidas em SalesPerson.cpp.
***********************************************************************************/

#ifndef SALESP_H
#define SALESP_H

class SalesPerson
{
private:
    double totalAnnualSales(); // 
    double sales[12]; // 12 estimativas de vendas mensais

public:
    SalesPerson(); // construtor
    void getSalesFromUser(); // insere vendas a partir do teclado
    void setSales(int, double);
    void printAnnualSales(); // resume e imprime as vendas
};


#endif // SALESP_H