/***********************************************************************************
 * File: date.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro para a classe Date.
***********************************************************************************/

#include <iostream>

#include "date.h"

using namespace std;

// construtor confirma valor adequado para month;
// chama checkDay para confirmar o valor adequado para day
Date::Date(int mn, int dy, int yr)
{
    if(mn > 0 && mn <= 12) // valida month
        month = mn;
    else
    {
        month = 1; 
        cout << "Invalid month (" << mn << ") set to 1.\n";
    }

    year = yr; // poderia validar yr
    day = checkDay(dy); // valida day
    
    // gera saída do objeto Date para mostrar quando seu construtor é chamado
    cout << "Date object constructor for date: ";
    print();
    cout << endl;
}

// imprime objeto Date na forma mês/dia/ano
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

// gera saída do objeto Date para mostrar quando destrutor é chamado
Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

// confirma valor adequado para day com base em month e year; 
// também trata anos bissextos 
int Date::checkDay(int testDay) const
{
    static const int daysPerMonth[13] = 
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // determina de testDay é válido durante o mês especificado
    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // verificação 29 de Fevereiro para ano bissexto
    if(month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0) && year % 100 != 0))
        return testDay;

    cout << "Invalid day (" << testDay << ") set to 1.\n";

    return 1;
}