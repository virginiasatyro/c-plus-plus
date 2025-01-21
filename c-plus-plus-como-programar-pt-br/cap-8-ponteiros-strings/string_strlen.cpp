/***********************************************************************************
 * File: string_strlen.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando strlen.
***********************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{ 
    char *string1 = "oasdiaosdpasmdp";
    char *string2 = "four";
    char *string3 = "Boston";

    cout << "The lenght of \"" << string1 << "\" is " << strlen(string1)
        << "\nThe lenght of \"" << string2 << "\" is " << strlen(string2)
        << "\nThe lenght of \"" << string3 << "\" is " << strlen(string3) << endl;
    
    return 0;
}

/*
The lenght of "oasdiaosdpasmdp" is 15
The lenght of "four" is 4
The lenght of "Boston" is 6
*/