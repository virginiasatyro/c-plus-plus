/***********************************************************************************
 * File: class_count.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Demonstrando os operadores de acesso ao membro de classe com . e ->. 
***********************************************************************************/

#include <iostream>

using namespace std;

class Count
{
public: 
    // configura o valor do membro de dados private x
    void setX(int value)
    {
        x = value;
    }

    // imprime o valor do membro de dados private x
    void print()
    {
        cout << x << endl;
    }
private:
    int x;
};

int main()
{
    Count counter; // cria objeto counter 
    Count *counterPtr = &counter; // cria ponteiro para counter
    Count &counterRef = counter; // cria referência para counter 

    cout << "Set x to 1 and print uing the object's name: ";
    counter.setX(1); // configura membro de dados x como 1
    counter.print(); 

    cout << "Set x to 2 and print uing the object's name: ";
    counter.setX(2); // configura membro de dados x como 2
    counter.print(); 

    cout << "Set x to 3 and print uing the object's name: ";
    counter.setX(3); // configura membro de dados x como 3
    counter.print(); 

    return 0;
}

/*
Set x to 1 and print uing the object's name: 1
Set x to 2 and print uing the object's name: 2
Set x to 3 and print uing the object's name: 3
*/