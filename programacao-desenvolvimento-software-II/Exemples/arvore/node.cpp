#include "node.h"
#include <iostream>

Node::Node(int elemento){
    this -> _elemento = elemento;
    this -> _esquerda = nullptr;
    this -> _direita = nullptr;
}

Node::~Node(){
    if(this -> _esquerda != nullptr){
        delete this -> _esquerda;
    }
    if(this -> _direita != nullptr){
        delete this -> _direita;
    }
}

bool Node::tem_elemento(int elemento){
    if(this -> _elemento == elemento){
        return true;
    }else if(elemento < this -> _elemento){
        if(this -> _esquerda == nullptr){
            return false;
        }else{
            return this -> _esquerda -> tem_elemento(elemento);
        }
    }else{
        if(this -> _direita == nullptr){
            return false;
        }else{
            return this -> _direita -> tem_elemento(elemento);
        }
    }
}

void Node::inserir_elemento(int elemento){
    if(elemento < this -> _elemento){
        if(this -> _esquerda == nullptr){
            this -> _esquerda = new Node(elemento);
        }else{
            this -> _esquerda -> inserir_elemento(elemento);
        }
    }else if(elemento > this -> _elemento){
        if(this -> _direita == nullptr){
            this -> _direita = new Node(elemento);
        }else{
            this -> _direita -> inserir_elemento(elemento);
        }
    }
}

// imprime pré-ordem
void Node::imprimir(){
    std::cout << this -> _elemento;

    if(this -> _esquerda != nullptr){
        this -> _esquerda -> imprimir();
    }
    if(this -> _direita != nullptr){
        this -> _direita -> imprimir();
    }
}

/**
// imprime em ordem
void Node::imprimir(){
    if(this -> _esquerda != nullptr){
        this -> _esquerda -> imprimir();
    }
    std::cout << this -> _elemento;
    if(this -> _direita != nullptr){
        this -> _direita -> imprimir();
    }
}

// imprime pós-ordem
void Node::imprimir(){
    if(this -> _esquerda != nullptr){
        this -> _esquerda -> imprimir();
    }
    if(this -> _direita != nullptr){
        this -> _direita -> imprimir();
    }
    std::cout << this -> _elemento;
}
*/
