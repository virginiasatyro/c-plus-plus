/***********************************************************************************
 * File: SalesPerson.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Funções-membro para a classe SalesPerson.cpp.
***********************************************************************************/

#include <iostream>
#include <iomanip>

#include "SalesPerson.h"

using namespace std;

// inicia elementos do array sales como 0.0
SalesPerson::SalesPerson()
{
    for(int i = 0; i < 12; i++)
        sales[i] = 0.0;
}

// obtém 12 estimativas de vendas do usuário no teclado
void SalesPerson::getSalesFromUser()
{
    double salesFigure;

    for(int i = 0; i <= 12; i++)
    {
        cout << "Enter sales amount for month " << i << ": ";
        cin >> salesFigure;
        setSales(i, salesFigure);
    }
}

// configura uma das 12 estimativas de vendas mensais
void SalesPerson::setSales(int month, double amount)
{
    // testa validade do mês e do valor 
    if(month >= 1 && month <= 12 && amount > 0)
        sales[month - 1] = amount;
    else 
        cout << "Invalid month or sales figure" << endl;
}

// imprime o total das vendas anuais 
void SalesPerson::printAnnualSales()
{
    cout << setprecision(2) << fixed
        << "\nThe total annual sales are: $"
        << totalAnnualSales() << endl;
}

// função utilitária private para somar vendas anuais
double SalesPerson::totalAnnualSales()
{
    double total = 0.0;

    for(int i = 0; i < 12; i++)
        total += sales[i];

    return total;
}