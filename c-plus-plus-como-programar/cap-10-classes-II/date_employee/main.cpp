/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Demonstrando composição -- um objeto com objetos-membro.
***********************************************************************************/

#include <iostream>

#include "employee.h"

using namespace std;

int main()
{
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);

    cout << endl;
    manager.print();

    cout << "\nTest Date constructor with invalid values: \n";
    Date lastDayOff(14, 35, 1994); // mês e dia inválidos
    cout << endl;

    return 0;
}

/*
Date object constructor for date: 7/24/1949
Date object constructor for date: 3/12/1988
Employee object constructor: Bob Blue

Blue, Bob Hired: 3/12/1988 Birthday: 7/24/1949

Test Date constructor with invalid values: 
Invalid month (14) set to 1.
Invalid day (35) set to 1.
Date object constructor for date: 1/1/1994

Date object destructor for date 1/1/1994
Employee object destructor: Blue, Bob
Date object destructor for date 3/12/1988
Date object destructor for date 7/24/1949
Date object destructor for date 3/12/1988
Date object destructor for date 7/24/1949
*/