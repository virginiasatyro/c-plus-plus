/***********************************************************************************
 * File: array_ponteiros_funcoes.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Demonstrando um array de ponteiros para funções.
***********************************************************************************/

#include <iostream>

void function0(int);
void function1(int);
void function2(int);

using namespace std;

int main()
{
    // inicializa array de 3 ponteiros para funçoes
    // que aceitam argumento int e retornam void 
    void (*f[3])(int) = {function0, function1, function2};

    int choice;

    cout << "Enter a number between 0 and 2, 3 to end: ";
    cin >> choice;

    // processa escolha do usuário
    while ((choice >= 0) && (choice < 3))
    {
        // invoca a função na localização choice no
        // array f e passa choice como um argumento
        (*f[choice])(choice);

        cout << "Enter a number between 0 and 2, 3 to end: ";
        cin >> choice;
    }
    
    cout << "Program execution completed." << endl;

    return 0;
}

void function0(int a)
{
    cout << "You entered " << a << " so function0 was called.\n\n";
}

void function1(int b)
{
    cout << "You entered " << b << " so function1 was called.\n\n";
}

void function2(int c)
{
    cout << "You entered " << c << " so function2 was called.\n\n";
}

/*
Enter a number between 0 and 2, 3 to end: 0
You entered 0 so function0 was called.

Enter a number between 0 and 2, 3 to end: 1
You entered 1 so function1 was called.

Enter a number between 0 and 2, 3 to end: 2
You entered 2 so function2 was called.

Enter a number between 0 and 2, 3 to end: 3
Program execution completed.
*/