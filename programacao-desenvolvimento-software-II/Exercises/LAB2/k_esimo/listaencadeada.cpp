#include <iostream>
#include "listaencadeada.h"

ListaEncadeada::ListaEncadeada(){
    this -> _inicio = nullptr;
    this -> _fim = nullptr;
    this -> _num_elementos_inseridos = 0;
}

ListaEncadeada::~ListaEncadeada(){
    node_t *anterior = nullptr;
    node_t *proximo = this -> _inicio;
    while(proximo != nullptr){
        anterior = proximo;
        proximo = proximo -> proximo;
        delete anterior;
    }
}

void ListaEncadeada::insere_elemento(int elemento){
    node_t *novo = new node_t();
    novo -> elemento = elemento;
    novo -> proximo = nullptr;
    novo -> anterior = nullptr;

    if (this -> _inicio == nullptr) {
        this -> _inicio = novo;
        this -> _fim = novo;
    }else{
        this -> _fim->proximo = novo;
        novo -> anterior = this->_fim;
        this -> _fim = novo;
    }

    this->_num_elementos_inseridos++;
}

void ListaEncadeada::remove_iesimo(int i) {
    if (i >= this->_num_elementos_inseridos) {
        return;
    }

    node_t *atual = this->_inicio;
    for (int j = 0; j < i; j++)
        atual = atual -> proximo;
    if (atual -> proximo != nullptr)
        atual -> proximo -> anterior = atual -> anterior;
    if (atual -> anterior != nullptr)
        atual -> anterior -> proximo = atual -> proximo;
    if (i == 0)
        this -> _inicio = atual -> proximo;
    if (i == this -> _num_elementos_inseridos - 1)
        this -> _fim = atual -> anterior;

    this -> _num_elementos_inseridos--;
    delete atual;
}

void ListaEncadeada::imprimir() {
    node_t *atual = this -> _inicio;
    while (atual != nullptr) {
        std::cout << atual -> elemento << " ";
        atual = atual -> proximo;
    }
    std::cout << std::endl;
}

int ListaEncadeada::k_esimo(bool direcao, int k){

    if(direcao == true){ // inicio ao fim
        node_t *atual = this -> _inicio;
        int count_ = 0;
        while (atual != nullptr) {
            if(count_ == k){
                return atual -> elemento;
            }
            atual = atual -> proximo;
            count_++;
        }
    }


    if(direcao == false){ // fim ao inicio
        node_t *atual2 = this -> _fim;
        int count2_ = 0;
        while(atual2 != nullptr){
            if(count2_ == k){
              return atual2 -> elemento;
            }
            atual2 = atual2 -> anterior;
            count2_++;
        }
    }
}

int ListaEncadeada::get_iesimo(int k){
    node_t *atual = this -> _inicio;
    int count_ = 0;
    while (atual != nullptr) {
        if(count_ == k){
            return atual -> elemento;
        }
        atual = atual -> proximo;
        count_++;
    }
}

