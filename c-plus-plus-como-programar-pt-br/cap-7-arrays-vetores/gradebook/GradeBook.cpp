/***********************************************************************************
 * File: GradeBook.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Funções membro para a classe GradeBook
***********************************************************************************/

#include <iostream>
#include <iomanip> // manipuladores de fluxo parametrizados 
#include <string>

#include "GradeBook.h"

using namespace std;

// construtor inicializa courseName e o array grades
GradeBook::GradeBook(string name, const int gradesArray[][tests])
{
    setCourseName(name);

    // copia notas para membro de dados grades
    for(int student = 0; student < students; student++)
        for(int test = 0; test < tests; test++)
            grades[student][test] = gradesArray[student][test];
}

// função que configura o nome do curso 
void GradeBook::setCourseName(string name)
{
    courseName = name;
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

void GradeBook::processGrades()
{
    // gera saída de array de notas
    outputGrades();

    // chama as funçoes getMinimum e getMaximum
    cout << "\n\nLowest grade is " << getMinimum() << "Highest grade is " << getMaximum() << endl;

    // imprime gráfico de distribuição
    outputBarChart();
}

int GradeBook::getMinimum()
{
    int lowGrade = 100; // supõe que a nota mais baixa é 100

    // loop pelas linhas da linha atual
    for(int student = 0; student < students; student++)
    {
        // faz loop pelas colunas da linha atual
        for (int test = 0; test < tests; test++)
        {
            if(grades[student][test] < lowGrade)
                lowGrade = grades[student][test];
        }
    }
    return lowGrade;
}

int GradeBook::getMaximum()
{
    int highGrade = 0; // supõe que a nota mais baixa é 100

    // loop pelas linhas da linha atual
    for(int student = 0; student < students; student++)
    {
        // faz loop pelas colunas da linha atual
        for (int test = 0; test < tests; test++)
        {
            if(grades[student][test] > highGrade)
                highGrade = grades[student][test];
        }
    }
    return highGrade;
}

double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0; // inicializa total

    // soma notas 
    for (int grade = 0; grade < grades; grade++)
        total += setOfGrades[grade];

    return static_cast<double>(total)/grades;
}

void GradeBook::outputBarChart()
{
    cout << "\n\nGrade distribution:" << endl;

    // armazena a frequencia das notas
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};

    for(int student = 0; student < students; student++)
        for(int test = 0; test < tests; test++)
            ++frequency[grades[student][test] / 10];

    // imprime barra para cada frequancia de nota
    for(int count = 0; count < frequencySize; count++)
    {
        if(count == 0)
            cout << " 0-9: ";
        else if(count == 10)
            cout << " 100: ";
        else 
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";

        // imprime barra de asteríscos 
        for(int stars = 0; stars < frequency[count]; stars++)
            cout << '*';

        cout << endl;
    }
}

void GradeBook::outputGrades()
{
    cout << "\nThe grades are: \n\n";

    cout << "\nThe grades are:\n\n";
    cout << "               "; 

    // cria um título de coluna 
    for(int test = 0; test < tests; test++)
        cout << "Test " << test + 1 << " ";

    cout << "Average" << endl; // título da coluna de média 

    // cria linhas/colunas de texto
    for(int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1;
        // gera saída de notas
        for(int test = 0; test < tests; test++)
            cout << setw(8) << grades[student][test];

        double average = getAverage(grades[student], tests);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}