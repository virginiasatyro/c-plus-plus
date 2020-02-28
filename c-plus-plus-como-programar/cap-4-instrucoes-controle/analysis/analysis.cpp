/***********************************************************************************
 * File: analysis/analysis.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro of 2020
 * 
 * Analysis class
***********************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "analysis.h"

// processa os resultados do teste de 10 alunos
void Analysis::processExamResults()
{
    int passes = 0; // número de aprovações 
    int failures = 0; // número de reprovações 
    int studentCounter = 1; // contador de alunos 
    int result; // 1 = aprovado | 2 = reprovado 

    while (studentCounter <= 10)
    {
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result; // lê resultado 

        if(result == 1)
            passes = passes + 1;
        else
            failures = failures + 1;
        
        studentCounter = studentCounter + 1;
    }

    // exibe aprovados e reprovados 
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    // determina se mais de oito alunos passaram 
    if(passes > 8)
        cout << "Raise tuition " << endl;
    
}