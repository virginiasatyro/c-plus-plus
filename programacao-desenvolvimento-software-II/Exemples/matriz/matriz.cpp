#include <iostream>
#include "matriz.h"

Matriz::Matriz(int n_linhas, int n_colunas){
    std::cout << "Construindo uma matriz" << std::endl;
    this->_dados = new int*[n_linhas](); // Tipo **: Similar à malloc(n*sizeof(int*));
    for(int i = 0; i < n_linhas; i++){
        this->_dados[i] = new int[n_colunas];
    }
    _n_linhas  = n_linhas;
    _n_colunas = n_colunas;
}

Matriz::~Matriz(){
    std::cout << "Destruindo uma matriz" << std::endl;
    for(int i = 0; i < this->_n_linhas; i++){
        delete[] this->_dados[i];
    }
    delete[] this->_dados;
}
