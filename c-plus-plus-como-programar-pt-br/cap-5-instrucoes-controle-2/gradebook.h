/***********************************************************************************
 * File: GradeBook.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Definição da classe GradeBook com as notas.
***********************************************************************************/

#include <string>
using std::string;

class GradeBook
{

public:
    
    GradeBook(string);            // construtor inicializa courseName com a string fornecida pelo argumento
    void setCourseName(string);   // função que configura o nome do curso
    string getCourseName();       // função que obtem o nome do curso 
    void displayMessage();        // função que exibe mensagem de boas vindas 
    void determineClassAverage(); // calcula a média das notas inseridas pelo usuário
    void inputGrades();           // insere número arbitrário de notas do usuário
    void displayGradeReport();    // exibe um relatório baseado nas notas 

private:

    string courseName; // nome do curso para esse GradeBook
    int aCount; // contagem de notas de A
    int bCount; // contagem de notas de B
    int cCount; // contagem de notas de C
    int dCount; // contagem de notas de D
    int eCount; // contagem de notas de E
    int fCount; // contagem de notas de F

}; // end of class GradeBook