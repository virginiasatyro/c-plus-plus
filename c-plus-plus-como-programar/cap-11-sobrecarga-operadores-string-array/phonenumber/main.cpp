// demonstrando os operadores de inserção
// e extração de fluxo sobrecarregados da classe PhoneNumber

#include <iostream>

#include "phoneNumber.h"

using namespace std;

int main()
{
    PhoneNumber phone; // cria objeto phone

    cout << "Enter phone number in the form (123) 456-7890:" << endl;

    // cin >> phone invoce operador>> emitindo implicitamente
    // a chamada da função global operator>>(cin, phone)
    cin >> phone;

    cout << "The phone number entered was: ";

    // cout << phone invoca operator<< emitindoimplicitamene
    // chamada da função global operator<< (cout, telefone)
    cout << phone << endl;

    return 0;
}