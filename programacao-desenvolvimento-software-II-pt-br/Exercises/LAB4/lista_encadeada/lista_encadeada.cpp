#include <iostream>
#include <cstddef>
#include "lista_encadeada.h"
#include "node.h"

ListaEncadeada::ListaEncadeada(){
}

ListaEncadeada::~ListaEncadeada(){
    Node *aux, *aux_prox;
    if(_inicio != nullptr){
        aux = _inicio;
        //aux_prox = aux -> get_prox();
        while(aux_prox != nullptr){
            aux_prox = aux -> get_prox();
            delete aux;
            aux = aux_prox;
            //aux_prox = aux_prox -> get_prox();
        }
        _inicio = nullptr;
    }
}

void ListaEncadeada::insere_value(float value){
    Node* n = new Node(value);
    //this->insere_node(n);
    ListaEncadeada::insere_node(n);
}

void ListaEncadeada::insere_node(Node* n){
    //Node *aux, *aux_prox;
    Node *aux = new Node(0);
    Node *aux_prox = new Node(0);

    if(_inicio == nullptr){
        _inicio = n;
    }
    else{
        aux = _inicio;
        aux_prox = aux -> get_prox();
        while(aux_prox != nullptr){
            aux=aux_prox;
            aux_prox=aux_prox->get_prox();
        }
        aux->set_prox(n);
    }
}

void ListaEncadeada::imprime_lista(){
    Node *aux=_inicio;
    while(aux != nullptr){
        aux = aux->get_prox();
        std::cout << aux -> get_value() << std::endl;
    }
    std::cout << std::endl;
    delete aux;
}
