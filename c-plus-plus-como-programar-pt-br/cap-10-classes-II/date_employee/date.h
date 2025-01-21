/***********************************************************************************
 * File: date.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições da classe Date;
***********************************************************************************/

#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int month; // 1-12
    int day; // 1-31 
    int year; 

    // função para verificar se o dia é adequado para o mês do ano
    int checkDay(int) const;

public:
    Date(int = 1, int = 1, int = 1900); // construtor-padrão
    void print() const; // imprime no formato mês/dia/ano
    ~Date(); // confirmar ordem de destruição
};

#endif // DATE_H