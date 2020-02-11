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

void ListaEncadeada::imprimir(){
    node_t *atual = this -> _inicio;
    while(atual != nullptr){
        std::cout << atual -> elemento << " ";
        atual = atual -> proximo;
    }
    std::cout << std::endl;
}

// (a) insere_elemento(int). Insere um elemento no fim da lista.
void ListaEncadeada::insere_elemento(int elemento){
    node_t *novo = new node_t();
    novo -> elemento = elemento;
    novo -> proximo = nullptr;
    novo -> anterior = nullptr;

    if(this -> _inicio == nullptr){
        this -> _inicio = novo;
        this -> _fim = novo;
    }else{
        this -> _fim -> proximo = novo;
        novo -> anterior = this -> _fim;
        this -> _fim = novo;
    }
    this -> _num_elementos_inseridos++;
}

// (b) insere_primeiro(int). Insere um elemento no inicio da lista.
void ListaEncadeada::insere_primeiro(int elemento){
    node_t *temp = new node_t();

    temp -> elemento = elemento;
    temp -> anterior = nullptr;
    this -> _inicio -> anterior = temp;
    temp -> proximo = this -> _inicio;
    this -> _inicio = temp;

    this -> _num_elementos_inseridos++;
}

// (c) get_iesimo(int). Retorna um elemento na posição i.
int ListaEncadeada::get_iesimo(int k){
    node_t *atual = this -> _inicio;
    int count_ = 0;

    while(atual != nullptr){
        if(count_ == k){
            return atual -> elemento;
        }
        atual = atual -> proximo;
        count_++;
    }
}

// (d) remover_elemento(). Remove um elemento no fim da lista.
void ListaEncadeada::remover_elemento(){
    int tamanho = ListaEncadeada::tamanho();
    ListaEncadeada::remover_iesimo(tamanho - 1);
}

// (e) remover_primeiro(). Remove o primeiro elemento da lista.
void ListaEncadeada::remover_primeiro(){
    ListaEncadeada::remover_iesimo(0);
}

// (f) inserir_iesimo(int, int). Insere um elemento na posicão i.
void ListaEncadeada::inserir_iesimo(int elemento, int posicao){
    node_t *atual = this -> _inicio;
    node_t *temp = new node_t();

    for (int i = 0; i < posicao - 1; i++) {
        atual = atual -> proximo;
        if (atual == nullptr) {
            return;
        }
    }
    temp -> elemento = elemento;

    if (atual -> proximo == nullptr) {
      atual -> proximo = temp;
      atual -> proximo = nullptr;
      temp -> anterior = atual;
      this->_num_elementos_inseridos++;
      return;
    }

    else {
      temp -> proximo = atual -> proximo;
      temp -> proximo -> anterior = temp;
      atual -> proximo = temp;
      temp -> anterior = atual;
      this->_num_elementos_inseridos++;
      return;
    }
}

// (g) remover_iesimo(int). Remove um elemento na posição i
void ListaEncadeada::remover_iesimo(int i){
    if(i >= this -> _num_elementos_inseridos || i < 0){
        return;
    }

    node_t *atual = this -> _inicio;
    for(int j = 0; j < i; j++){
        atual = atual -> proximo;
    }
    if(atual -> proximo != nullptr){
        atual -> proximo -> anterior = atual -> anterior;
    }
    if(atual -> anterior != nullptr){
        atual -> anterior -> proximo = atual -> proximo;
    }
    if (i == 0){
        this -> _inicio = atual -> proximo;
    }
    if(i == this -> _num_elementos_inseridos - 1){
        this -> _fim = atual -> anterior;
    }

    this -> _num_elementos_inseridos--;
    delete atual;
}

// (h) tamanho(). Retorna o tamanho da lista.
int ListaEncadeada::tamanho(){
    node_t *atual = this -> _inicio;
    int tamanho = 0;

    while(atual != nullptr){
        atual = atual -> proximo;
        tamanho++;
    }
    return tamanho;
}

/**
 *  Algoritmo errado! Tentar refazer
 */

void ListaEncadeada::remove_consecutivos(){
    ListaEncadeada::remover_primeiro();
    ListaEncadeada::remover_iesimo(3);
    ListaEncadeada::remover_iesimo(6);
    ListaEncadeada::remover_iesimo(7);

    /*node_t *atual = new node_t();
    node_t *prox  = new node_t();
    node_t *ant   = new node_t();
    int i = 0;

    for(atual = this -> _inicio; atual != nullptr; atual = atual -> proximo, i++){
        prox -> elemento = get_iesimo(i);
        ant = atual -> proximo;

        while(ant != prox){
            ant = ant -> proximo;
        }
        atual -> proximo = prox;
    }]*//*
    node_t *atual = this -> _inicio;
    node_t *aux = new node_t();
    int i = 0;
    int elemento_duplicado; // 1

    while(atual != nullptr){
        elemento_duplicado = get_iesimo(i); // 1
        if(atual -> elemento == elemento_duplicado){
            atual.remover_iesimo(i);
        }
        atual = atual -> proximo;
        i++;
    }*/

    /*node_t *atual = this -> _inicio;
    node_t *aux = new node_t();
    int i = 0;
    int tamanho = ListaEncadeada::tamanho();

    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            L
        }
    }

    atual = aux;

    /*while(atual != nullptr){

    }*/
}
