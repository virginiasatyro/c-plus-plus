/***********************************************************************************
 * File: grade_book_4_h/GradeBook.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro de 2020
 * 
 * GradeBook class
***********************************************************************************/

#include <string>
using std::string;

class GradeBook
{
private:

    string courseName; // nome do curso para esse GradeBook

public:
    
    GradeBook(string name); // construtor inicializa courseName com a string fornecida pelo argumento
    void setCourseName(string name); // função que configura o nome do curso
    string getCourseName(); // função que obtem o nome do curso 
    void displayMessage(); // função que exibe mensagem de boas vindas 

}; // end of class GradeBook
