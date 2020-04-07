/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Demonstrando a ordem que construtores e destrutores são chamados. 
***********************************************************************************/

#include <iostream>

#include "CreateAndDestroy.h"

using namespace std;

void create(void); 

CreateAndDestroy first(1, "(global before main)");

int main()
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy second(2, "(local automatic in main)");
    static CreateAndDestroy third(3, "(local static in main)");

    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroy fourth(4, "(local automatic in main)");
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;


    return 0;
}

void create(void)
{
    cout << "\nCREATE FUNCTION: EXECUTIOM BEGINS" << endl;
    CreateAndDestroy fifth(5, "(local automatic in create)");
    static CreateAndDestroy sixth(6, "(local static in create)");
    CreateAndDestroy seventh(7, "(local automatic in create)");
    cout << "\nCREATE FUNCTION: EXECUTIOM ENDS" << endl;
}

/*
Object 1  constructor runs    (global before main)

MAIN FUNCTION: EXECUTION BEGINS
Object 2  constructor runs    (local automatic in main)
Object 3  constructor runs    (local static in main)

CREATE FUNCTION: EXECUTIOM BEGINS
Object 5  constructor runs    (local automatic in create)
Object 6  constructor runs    (local static in create)
Object 7  constructor runs    (local automatic in create)

CREATE FUNCTION: EXECUTIOM ENDS
Object 7  destructor runs   (local automatic in create)
Object 5  destructor runs   (local automatic in create)

MAIN FUNCTION: EXECUTION RESUMES
Object 4  constructor runs    (local automatic in main)

MAIN FUNCTION: EXECUTION ENDS
Object 4  destructor runs   (local automatic in main)
Object 2  destructor runs   (local automatic in main)

Object 6  destructor runs   (local static in create)
Object 3  destructor runs   (local static in main)

Object 1  destructor runs   (global before main)
*/