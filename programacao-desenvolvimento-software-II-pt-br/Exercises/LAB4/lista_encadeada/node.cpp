#include "node.h"
#include <iostream>
#include <cstddef>

Node::Node(float value){
    this -> _value = value;
    this -> _prox  = nullptr;
}

Node::~Node(){
}

float Node::get_value(){
    return this -> _value;
}

void Node::set_value(float value){
    this -> _value = value;
}

Node* Node::get_prox(){
    return this -> _prox;
}

void Node::set_prox(Node* prox){
    this -> _prox = prox;
}
