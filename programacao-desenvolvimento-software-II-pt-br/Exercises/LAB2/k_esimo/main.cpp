#include <iostream>
#include <string>
#include "listaencadeada.h"

int main(){

    ListaEncadeada lista = ListaEncadeada();
    lista.insere_elemento(2);
    lista.insere_elemento(3);
    lista.insere_elemento(4);
    lista.insere_elemento(5);
    lista.insere_elemento(6);
    lista.imprimir();
    lista.remove_iesimo(0);
    lista.imprimir();
    lista.remove_iesimo(3);
    lista.imprimir();


    std::cout << lista.k_esimo(true, 0) << std::endl;
    std::cout << lista.k_esimo(true, 1) << std::endl;
    std::cout << lista.k_esimo(true, 2) << std::endl;

    std::cout << lista.k_esimo(false, 0) << std::endl;
    std::cout << lista.k_esimo(false, 1) << std::endl;
    std::cout << lista.k_esimo(false, 2) << std::endl;

    std::cout << lista.get_iesimo(0) << std::endl;


    return 0;
}
