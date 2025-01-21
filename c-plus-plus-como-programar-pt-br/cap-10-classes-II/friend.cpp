/***********************************************************************************
 * File: friend.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Friends podem acessar membros private de uma classe;
***********************************************************************************/

#include <iostream>

using namespace std;

// definição da classe Count
class Count
{
    friend void setX(Count &, int); // declaração friend

private:
    int x;

public:
    // construtor
    Count() : x(0) // inicializa x como 0
    {}

    // gera saída de x 
    void print() const
    {
        cout << x << endl;
    }
};

// a função setX pode modificar os dados private de Count
// porque setX é declarada como uma amiga de Count 
void setX(Count &c, int val)
{
    c.x = val;
}

int main()
{
    Count counter; // cria objeto

    cout << "counter.x after instantiation: ";
    counter.print();

    setX(counter, 8); // configura x utilizando uma função friend
    cout << "counter.x after call to setX friend function: ";
    counter.print();

    return 0;
}
