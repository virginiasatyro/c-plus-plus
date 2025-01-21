/***********************************************************************************
 * File: grade_book/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * GradeBook class
***********************************************************************************/

#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook("CS101 Introduction to C++");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();

    return 0;
}

/* Operador de coerção:
 * converção entre tipos numéricos fundamentais, como int e double. 
 */