/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * GradeBook class test
***********************************************************************************/

#include "gradebook.h"

int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}