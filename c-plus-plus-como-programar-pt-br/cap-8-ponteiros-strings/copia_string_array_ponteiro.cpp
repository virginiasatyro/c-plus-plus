/***********************************************************************************
 * File: copia_string_array_ponteiro.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Copiando uma string utilizando a notação de array e a notação de poonteiro.
***********************************************************************************/

#include <iostream>

using namespace std;

void copy1(char *, const char *);
void copy2(char *, const char*);

int main()
{
    char string1[10];
    char *string2 = "Hello";
    char string3[10];
    char string4[] = "Good Bye";

    copy1(string1, string2);
    cout << "string1 = " << string1 << endl;

    copy2(string3, string4);
    cout << "string3 = " << string3 << endl;

    return 0;
}

// copia s2 para s1 utilizando notação de array
void copy1(char *s1, const char *s2)
{
    // cópia ocorre no cabeçalho do for
    for(int i = 0; (s1[i] = s2[i]) != '\0'; i++)
        ;
}

// copia s2 para s1 utilizando notação de ponteiro
void copy2(char *s1, const char *s2)
{
    for(; (*s1 = *s2) != '\0'; s1++, s2++)
        ;
}

/*
string1 = Hello
string3 = Good Bye
*/