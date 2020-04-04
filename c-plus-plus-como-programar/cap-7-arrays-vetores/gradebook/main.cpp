/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Criando um objeto GradeBook utilizando um array de notas.
***********************************************************************************/

#include "GradeBook.h"

int main()
{
    // array de notas de alunos 
    int gradesArray[GradeBook::students][GradeBook::tests] = 
    {{87, 96, 70},
     {68, 87, 90},
     {94, 100, 90},
     {100, 81, 82},
     {83, 65, 85},
     {78, 87, 65},
     {85, 75, 83},
     {91, 94, 100},
     {76, 72, 84},
     {87, 93, 73}};

    GradeBook myGradeBook("CS101 Introduction to C++", gradesArray);
    
    myGradeBook.displayMessage();
    myGradeBook.processGrades();

    return 0;
}

/*
Welcome to the grade book for: CS101 Introduction to C++!

The grades are: 

The grades are:

               Test 1 Test 2 Test 3 Average
Student  1      87      96      70    84.33
Student  2      68      87      90    81.67
Student  3      94     100      90    94.67
Student  4     100      81      82    87.67
Student  5      83      65      85    77.67
Student  6      78      87      65    76.67
Student  7      85      75      83    81.00
Student  8      91      94     100    95.00
Student  9      76      72      84    77.33
Student 10      87      93      73    84.33

Lowest grade is 65Highest grade is 100

Grade distribution:
 0-9: 
10-19: 
20-29: 
30-39: 
40-49: 
50-59: 
60-69: ***
70-79: ******
80-89: ***********
90-99: *******
 100: ***
*/