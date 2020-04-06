/***********************************************************************************
 * File: string_strcat.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando strcmp e strncmp.
***********************************************************************************/

#include <iostream>
#include <cstring>
#include <iomanip> 

using namespace std;

int main()
{
    char *s1 = "Happy New Year";
    char *s2 = "Happy New Year";
    char *s3 = "Happy Holidays";

    cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3
        << "\n\nstrcmp(s1, s2) = " << setw(2) << strcmp(s1, s2)
        << "\nstrcmp(s1, s3) = " << setw(2) << strcmp(s1, s3)
        << "\nstrcmp(s3, s1) = " << setw(2) << strcmp(s3, s1);

    cout << "\n\nstrncmp(s1, s2, 6) = " << setw(2)
        << strncmp(s1, s2, 6) << "\nstrncmp(s1, s3, 7) = " << setw(2)
        << strncmp(s1, s3, 7) << "\nstrncmp(s3, s1, 7) = " << setw(2)
        << strncmp(s3, s1, 7) << endl;

    return 0;
}

/*
WARNINGS:

string_strcmp.cpp: In function ‘int main()’:
string_strcmp.cpp:19:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   19 |     char *s1 = "Happy New Year";
      |                ^~~~~~~~~~~~~~~~
string_strcmp.cpp:20:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   20 |     char *s2 = "Happy New Year";
      |                ^~~~~~~~~~~~~~~~
string_strcmp.cpp:21:16: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   21 |     char *s3 = "Happy Holidays";
      |                ^~~~~~~~~~~~~~~~

OUTPUT:

s1 = Happy New Year
s2 = Happy New Year
s3 = Happy Holidays

strcmp(s1, s2) =  0
strcmp(s1, s3) =  6
strcmp(s3, s1) = -6

strncmp(s1, s2, 6) =  0
strncmp(s1, s3, 7) =  6
strncmp(s3, s1, 7) = -6
*/

// era para ser 1 e -1 ao invés de 6