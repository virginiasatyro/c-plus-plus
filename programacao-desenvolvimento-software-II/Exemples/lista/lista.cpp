#include <iostream>
#include "lista.h"

/**
 *   Construtor
 */

ListaVetorInteiros::ListaVetorInteiros(){
    this -> _elementos = new int[TAMANHO_INICIAL]();
    this -> _num_elementos_inseridos = 0;
    this -> _capacidade = TAMANHO_INICIAL;
}

/**
 *  Insere elementos inteiros na ListaVetorInteiros
 */

void ListaVetorInteiros::inserir_elemento(int elemento){
    if(this -> _num_elementos_inseridos == this -> _capacidade){
        int *new_data = new int[this -> _capacidade * 2];

        for(int i = 0; i < this -> _num_elementos_inseridos; i++){
            new_data[i] = this -> _elementos[i];
        }
        delete[] = this -> _elementos;
        this -> _elementos = new_data;
        this -> _capacidade = this -> _capacidade * 2;
    }
    this -> elementos[this -> _num_elementos_inseridos] = elemento;
    this -> _num_elementos_inseridos++;
}

/**
 *  Imprime a lista de vetores inteiros
 */

void ListaVetorInteiros::imprimir(){
    for(int i = 0; i < this -> _num_elementos_inseridos; i++){
        std::cout << this -> _elementos[i] << " ";
    }
    std::cout << std::endl;
}

/**
 *  Destrutor
 */

ListaVetorInteiros::~ListaVetorInteiros(){
    delete[] this -> _elementos;
}
