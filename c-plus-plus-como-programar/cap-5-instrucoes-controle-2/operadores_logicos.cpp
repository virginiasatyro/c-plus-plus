/***********************************************************************************
 * File: operadores_logicos.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Operadores lógicos
***********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // cria tabela verdade para o operador && (E)
    cout << boolalpha << "Logical AND (&&)"
    << "\nfalse && false: " << (false && false)
    << "\nfalse && true: " << (false && true)
    << "\ntrue && false: " << (true && false)
    << "\ntrue && true: " << (true && true) << "\n\n";

    // cria tabela verdade para o operador || (OU)
    cout << "Logical OR (||)"
    << "\nfalse || false: " << (false || false)
    << "\nfalse || true: " << (false || true)
    << "\ntrue || false: " << (true || false)
    << "\ntrue || true: " << (true || true) << "\n\n";

    // cria tabela-verdade para operador !
    cout << "Logical NOT (!)"
    << "\n!false: " << (!false)
    << "\n!true: " << (!true) << endl;

    return 0;
}