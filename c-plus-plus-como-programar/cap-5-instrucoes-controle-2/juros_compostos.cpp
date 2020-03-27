/***********************************************************************************
 * File: juros_compostos.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * While loop test
***********************************************************************************/

#include <iostream> 
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw; // configuração de largura de campo
using std::setprecision;

#include <cmath> // biblioteca de matemática
using std::pow; 

int main()
{
    double amount; // quantia em depósito ao fim de cada ano
    double principal = 100.0; // quantia inicial antes dos juros
    double rate = .05; // taxa de juros 

    // exibe cabeçalho
    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    // configura o formato de número de ponto flutuante 
    cout << fixed << setprecision(2);

    // calcula a quantia de depósito para cada um dos dez anos
    for(int year = 1; year <= 10; year++)
    {
        amount = principal * pow(1.0 + rate, year);

        // exibe o ano e a quantia
        cout << setw(4) << year << setw(21) << amount << endl;
    }
    
    return 0;
}