/***********************************************************************************
 * File: array_const.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Demonstando o qualificador do tipo const.
***********************************************************************************/

/*
Aplicar o qualificador de tipo const a um parâmetro de array em uma função para impedir
que o array original seja modificado no corpo da função é outro exemplo do princípio
de menor privilégio. As funções não devem receber a capacidade de modificar um array
a menos que seja absolutamente necessário.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void tryToModifyArray(const int []);

int main()
{   
    int a[] = {10, 20, 30};

    tryToModifyArray(a);
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << '\n';

    return 0;
}

void tryToModifyArray(const int b[])
{
    // ERRO - array constante não pode ser modificado!
    // b[0] /= 2;
    // b[1] /= 2;
    // b[2] /= 2;
}