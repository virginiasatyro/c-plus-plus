#include <iostream>
#include "listaencadeada.h"

int main(){

    ListaEncadeada l = ListaEncadeada();
    l.insere_elemento(1);
    l.insere_elemento(2);
    l.insere_elemento(3);
    l.insere_elemento(4);
    l.insere_elemento(5);
    l.insere_elemento(6);
    l.insere_elemento(7);
    l.insere_elemento(8);
    l.imprimir();
    std::cout << std::endl;
    std::cout << "Tamanho: " << l.tamanho() << std::endl;

    l.remover_iesimo(0);
    l.remover_iesimo(3);
    l.imprimir();
    std::cout << "Tamanho: " << l.tamanho() << std::endl;

    std::cout << "Primeiro elemento: " << l.get_iesimo(0) << std::endl;
    std::cout << "Ultimo elemento: " << l.get_iesimo(l.tamanho() - 1) << std::endl;

    l.remover_elemento();
    std::cout << "Removendo o ultimo elemento: ";
    l.imprimir();

    l.remover_primeiro();
    std::cout << "Removendo o primeiro elemento: ";
    l.imprimir();

    //l.inserir_iesimo(0, 0);
    //l.inserir_iesimo(1, 1);
    std::cout << "Inserindo pelo inserir_iesimo: ";
    l.insere_primeiro(1000);
    l.imprimir();
   // l.inserir_iesimo(1, 1); // elemtno, posicao
   // l.imprimir();
  /*  l.inserir_iesimo(2, 2);
    l.imprimir();
    l.inserir_iesimo(3, 3);
    l.imprimir();
    l.inserir_iesimo(4, 4);
    l.imprimir();*/

    return 0;
}
