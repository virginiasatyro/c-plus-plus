/***********************************************************************************
 * File: array_caracteres.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Tratando arrays de caracteres como strings.
***********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    char string1[20]; // reserva 20 caracteres 
    char string2[] = "string literal"; // reserva 15 caracteres

    // lê a string
    cout << "Enter a string (20): ";
    cin >> string1;

    cout << "string1 is: " << string1 << " string2 is: " << string2 << endl;

    cout << "string1 with spaces between characters is: " << endl;

    for(int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1;
    cout << "\nstring1 is: " << string1 << endl;

    return 0;
}

/*
Enter a string (20): hello there
string1 is: hello string2 is: string literal
string1 with spaces between characters is: 
h e l l o 
string1 is: there
*/