/***********************************************************************************
 * File: template_vector.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Demonstrando o template de classd vector da C++ Standar Library.
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void outputVector(const vector< int > &); // exibe o vetor 
void inputVector(vector< int > &); // insere valores no vetor

int main()
{
    vector< int > integers1(7); // vetor int de 7 elementos
    vector< int > integers2(10); // vetor int de 10 elementos 

    // imprime o tamanho do conteúdo de integers1
    cout << "Size of vector integers1 is " << integers1.size()
        << "\nvector after initializaton:" << endl;
    outputVector(integers1);

    // imprime o tamanho do conteúdo de integers2
    cout << "\nSize of vector integers2 is " << integers2.size()
        << "\nvector after initializaton:" << endl;
    outputVector(integers2);

    // insere e imprime integers1 e integers2 
    cout << "\nEnter 17 integers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contani:\n" 
        << "integers1:" << endl;
    outputVector(integers1);
    cout << "\nintegers2:" << endl;
    outputVector(integers2);

    // utiliza o operador de desigualdade (!=) com objetos vector
    cout << "\nEvaluationg: integers1 != integers2" << endl;

    if(integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;
    
    // cria vetor integers3 utilizando integers1 como inicializador
    // imprime tamanho e conteúdo
    vector< int > integers3(integers1); // construtor de cópia 

    cout << "\nSize of vector integers3 is " << integers3.size()
        << "\nvector after initialization:" << endl;
    outputVector(integers3);

    // utiliza operador atribuição (=) sobrecarregado 
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // integers1 é maior que integers2 

    cout << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);

    // utiliza operador de igualdade (==) com objetos vector 
    cout << "\nEvaluating: integers1 == integers2" << endl;

    if(integers1 == integers2)
        cout << "integers1 and integers2 are equal" << endl;

    // utiliza colchetes para criar rvalue 
    cout << "\nintegers1[5] is " << integers1[5];

    // utiliza colchetes para criar lvalue 
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: " << endl;
    outputVector(integers1);

    // tentativa de utilizar subscrito fora do intervalo 
    cout << "\n\nAttempt to assign 1000 to integers1.at(15) - ERROR" << endl;
    // integers1.at(15) = 1000; FORA DO INTERVALO

    return 0;
}

// gera saída do conteúdo do vetor
void outputVector(const vector< int > &array)
{
    size_t i; // declara a variável de controle 

    for(int i = 0; i < array.size(); i++)
    {
        cout << setw(12) << array[i];

        if((i + 1) % 4 == 0) // 4 números por linha de saída 
            cout << endl;
    }
    if(i % 4 != 0)
        cout << endl;
}

// insere o conteúdo de vetor 
void inputVector(vector< int > &array)
{
    for(size_t i = 0; i < array.size(); i++)
        cin >> array[i];
}

/*
Size of vector integers1 is 7
vector after initializaton:
           0           0           0           0
           0           0           0
Size of vector integers2 is 10
vector after initializaton:
           0           0           0           0
           0           0           0           0
           0           0
Enter 17 integers:
1
2
3
4
2

1
221
32
3
34
43
43
2
1
21
21
3

After input, the vectors contani:
integers1:
           1           2           3           4
           2           1         221integers2:
          32           3          34          43
          43           2           1          21
          21           3
Evaluationg: integers1 != integers2
integers1 and integers2 are not equal

Size of vector integers3 is 7
vector after initialization:
           1           2           3           4
           2           1         221
Assigning integers2 to integers1:
integers1:
          32           3          34          43
          43           2           1          21
          21           3integers2:
          32           3          34          43
          43           2           1          21
          21           3
Evaluating: integers1 == integers2
integers1 and integers2 are equal

integers1[5] is 2

Assigning 1000 to integers1[5]
integers1: 
          32           3          34          43
          43        1000           1          21
          21           3
*/