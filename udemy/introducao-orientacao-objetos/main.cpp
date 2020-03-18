#include <cstdlib>
#include <string>
#include <iostream>

#include "carro.h"

using namespace std;

int main()
{
    Carro c1; // objeto carro 1
    c1.setMarca("Fiat");
    c1.setAno(2017);

    Carro c2; // objeto carro 2
    c2.setMarca("Ferrari");
    c2.setAno(2015);

    cout << c1.getMarca() << endl;
    cout << c2.getMarca() << endl;

    Carro c3("Ford", 2017);

    cout << c3.getMarca() << endl; // Ford 
    cout << c3.getAno() << endl;   // 2017

    cout << c1.pneus << endl; // 4 
    cout << c2.pneus << endl; // 4
    // se declaro: c1.pneu = 2 -->> todos os pneus (atributo da classe) são modificados

    return 0; 
}