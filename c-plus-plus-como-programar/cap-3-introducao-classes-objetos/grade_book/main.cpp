/***********************************************************************************
 * File: grade_book/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro de 2020
 * 
 * GradeBook class
***********************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
public:
    void displayMessage() // display welcome message 
    {
        cout << "Welcome to GradeBook!" << endl; 
    }
    void displayMessage2(string courseName)
    {
        cout << "Welcome to the grade book for: " << courseName << "!\n" << endl;
    }
}; // end of class GradeBook

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    string nameOfCourse;
    GradeBook myGradeBook2;

    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse); // le o nome do curso com espaços em branco
    cout << endl; // gera saída de linha em branco 

    myGradeBook2.displayMessage2(nameOfCourse);

    return 0;
}

/* public:
 * Indica que a função está disponível para o público. 
 * Isto é, pode ser chamada por outras funções no programa
 * e por funções-membro de outras classes. 
 */