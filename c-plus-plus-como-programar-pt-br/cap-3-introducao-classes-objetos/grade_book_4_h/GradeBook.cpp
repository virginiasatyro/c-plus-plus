/***********************************************************************************
 * File: grade_book_4_h/GradeBook.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * GradeBook class
***********************************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

// construtor inicializa courseName com a string fornecida pelo argumento
GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

// função que configura o nome do curso 
// assegura que o nome do curso tenha no máximo 25 caracteres 
void GradeBook::setCourseName(string name)
{
    if(name.length() <= 25)
        courseName = name;
    
    if(name.length() > 25){ // nome tem mais de 25 caracteres 
        courseName = name.substr(0, 25); // comprimento da string: 25 
        cout << "Name \"" << name << "\" exeeds maximum length (25).\n" << endl;
    }
}

// função que obtem o nome do curso 
string GradeBook::getCourseName()
{
    return courseName;
}

// função que exibe mensagem de boas vindas 
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for: " << courseName << "!\n" << endl;
}