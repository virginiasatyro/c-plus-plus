#include <cstdlib>
#include <string>
#include <iostream>

#include "carro.h"

using namespace std;

Carro::Carro()
{
    this->marca = "Fiat"; // por padão, declaro que a marca inicial é sempre fiat
}

Carro::Carro(string marca, int ano)
{
    this->marca = marca;
    this->ano = ano;
}

Carro::~Carro()
{
    cout << "Carro foi destruído" << endl; 
    // não precisa chamar na main, os objetos criados são liberados na memória
}

void Carro::setMarca(string marca)
{
    this->marca = marca;
}

string Carro::getMarca()
{
    return marca;
}

void Carro::setAno(int ano)
{
    if(ano > 1900){
        this->ano = ano;
    }else{
        this->ano = 1900;
    }
}

int Carro::getAno()
{
    return ano;
}

int Carro::pneus = 4; // atributo da classe -> igual para todos os itens - uso do static