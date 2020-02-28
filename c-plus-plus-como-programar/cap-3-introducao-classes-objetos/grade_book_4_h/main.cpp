/***********************************************************************************
 * File: grade_book_4_h/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro de 2020
 * 
 * GradeBook class
***********************************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++");
    GradeBook gradeBook2("CS102 Introduction to classes in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    return 0;
}