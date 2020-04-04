/***********************************************************************************
 * File: GradeBook.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definição da classe GradeBook que usa um array para armazenar notas de teste.
***********************************************************************************/

#include <string>

using namespace std;

class GradeBook
{
public:
    const static int students = 10; // constante -- número de alunos que fizeram o teste 
    const static int tests = 3; // número de testes

    // construtor inicializa o nome do curso e o array de notas 
    GradeBook(string, const int[][tests]);

    void setCourseName(string); // configurar nome do curso 
    string getCourseName(); // recuperar nome do curso
    void displayMessage(); // exibe boas vindas
    void processGrades(); // realiza operações nos dados
    int getMinimum(); // localiza nota mínima 
    int getMaximum(); // localiza nota máxima 
    double getAverage(const int [], const int); // determina nota média
    void outputBarChart(); // gera saída do gráfico de barras de distribuição de notas
    void outputGrades(); // gera saída do conteúdo do array de notas

private:
    string courseName; // nome do curso 
    int grades[students][tests]; // array de notas de aluno 
}; 