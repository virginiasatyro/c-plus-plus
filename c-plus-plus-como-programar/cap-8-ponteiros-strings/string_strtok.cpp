/***********************************************************************************
 * File: string_strtok.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando strtok.
***********************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sentence[] = "This is a sentence with 7 tokens.";
    char *tokenPtr;

    cout << "The string to be tokenized is:\n" << sentence 
        << "\n\nThe tokens are:\n\n";
    
    // inicia a tokenização da frase
    tokenPtr = strtok(sentence, " ");

    // continua tokenizando a frase até tokenPtr tornar-se NULL
    while (tokenPtr != NULL)
    {
        cout << tokenPtr << '\n';
        tokenPtr = strtok(NULL, " "); // obtém próximo token
    }

    cout << "\nAfter strtok, sentence = " << sentence << endl;

    return 0;
}

/*
The string to be tokenized is:
This is a sentence with 7 tokens.

The tokens are:

This
is
a
sentence
with
7
tokens.

After strtok, sentence = This
*/