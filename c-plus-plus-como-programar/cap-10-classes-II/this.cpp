/***********************************************************************************
 * File: this.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando o ponteiro this para referenciar membros de objeto.
***********************************************************************************/

#include <iostream>

using namespace std;

class Test
{
private:
    int x;

public:
    Test(int = 0); // construtor-padrão
    void print() const;
};

Test::Test(int value) : x (value)
{}

void Test::print() const 
{
    // utiliza implicitamente o ponteiro this para acessar o membro x
    cout << "       x = " << x;

    // utiliza explicitamente o ponteiro this e o operador seta 
    // para acessar o membro x
    cout << "\n this->x = " << this->x;

    // utiliza explicitamente o ponteiro this desreferenciado e o 
    // operador ponto para acessar o membro x
    cout << "\n(*this).x = " << (*this).x << endl;
}

int main()
{
    Test testObject(12); // instancia e inicializa testObject 

    testObject.print();
    return 0;
}

/*
       x  = 12
 this->x  = 12
(*this).x = 12
*/