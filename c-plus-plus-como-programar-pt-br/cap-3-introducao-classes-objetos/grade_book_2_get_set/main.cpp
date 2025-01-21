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
private:
    string courseName; // nome do curso para esse GradeBook

public:
    // função que configura o nome do curso 
    void setCourseName(string name)
    {
        courseName = name;
    }

    // função que obtem o nome do curso 
    string getCourseName()
    {
        return courseName;
    }

    // função que exibe mensagem de boas vindas 
    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for: " << courseName << "!\n" << endl;
    }
}; // end of class GradeBook

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
    
    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse); // le o nome do curso com espaços em branco
    cout << endl; // gera saída de linha em branco 

    myGradeBook.displayMessage(nameOfCourse);

    return 0;
}

/* private:
 * É um especificador de acesso. Suas funções são acessíveis
 * somente a funções-membro da classe para a qual elas são
 * declaradas. Por isso utilizamos set e get.
 * Um membro private não pode ser acessado na main(), por 
 * exemplo. 
 */