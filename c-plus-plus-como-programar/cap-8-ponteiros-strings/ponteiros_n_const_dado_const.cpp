/***********************************************************************************
 * File: ponteiros_n_const_dado_const.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Imprimindo uma string um caractere por vez utilizando um ponteiro não constante
 * para dados constantes.
***********************************************************************************/

#include <iostream>

using namespace std;

void printCharacters(const char *);

int main()
{
    const char phrase[] = "print characters of a string";

    cout << "The string is:\n";
    printCharacters(phrase); // imprime caracteres em phrase 
    cout << endl;

    return 0;
}

// sPtr pode ser modificado, mas não pode modificar o caractere para o qual
// ele aponta, isto é, sPtr é um ponteiro 'de leitura'
void printCharacters(const char *sPtr)
{
    for( ; *sPtr != '\0'; sPtr++)
        cout << *sPtr;
}

/*
The string is:
print characters of a string
*/