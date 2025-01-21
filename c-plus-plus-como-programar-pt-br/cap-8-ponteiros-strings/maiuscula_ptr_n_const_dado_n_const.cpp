/***********************************************************************************
 * File: maiuscula_ptr_n_const_dado_n_const.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Convertendo minúsculas em maiúsculas.
 * Utilizando ponteiro nao constante para dados não constantes.
***********************************************************************************/

#include <iostream>
#include <cctype> // islower e toupper 

using namespace std;

void convertToUppercase(char *);

int main()
{
    char phrase[] = "characters and $32.98";

    cout << "The phrase before conversion is: " << phrase;
    convertToUppercase(phrase);
    cout << "\nThe phrase after conversion is: " << phrase << endl;

    return 0;
}

// converte string em letras maiúsculas
void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0')
    {
        if(islower(*sPtr)) // se for minúsculo
            *sPtr = toupper(*sPtr); // converte 

        sPtr++;
    }
    
}

/*
The phrase before conversion is: characters and $32.98
The phrase after conversion is: CHARACTERS AND $32.98
*/