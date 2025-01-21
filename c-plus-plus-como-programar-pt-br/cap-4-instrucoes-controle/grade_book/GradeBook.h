/***********************************************************************************
 * File: grade_book/GradeBook.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
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
    
    GradeBook(string); // construtor inicializa courseName com a string fornecida pelo argumento
    void setCourseName(string); // função que configura o nome do curso
    string getCourseName(); // função que obtem o nome do curso 
    void displayMessage(); // função que exibe mensagem de boas vindas 
    void determineClassAverage(); // calcula a média das notas inseridas pelo usuário

}; // end of class GradeBook
