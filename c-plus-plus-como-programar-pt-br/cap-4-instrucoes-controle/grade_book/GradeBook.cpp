/***********************************************************************************
 * File: grade_book/GradeBook.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * GradeBook class
***********************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // assegura que o ponto de fração decimal seja exibido 

#include <iomanip> // manipuladores de fluxo parametrizados 
using std::setprecision; // configura a precisão da saída numérica 

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

void GradeBook::determineClassAverage()
{
    int total = 0, gradeCounter = 0, grade;
    double average; // número com ponto de fração decimal para a média

    // fase de  processamento 
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // insere nota ou valor de sentinela 

    while (grade != -1) // enquanto a nota não é -1
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: "; // solicita entrada 
        cin >> grade; // insere nota ou valor de sentinela

    }

    if(gradeCounter != 0)
    {
        average = static_cast<double>(total) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average << endl;
    }
    else
    {
        cout << "No grades were entered!" << endl;
    }
    
}