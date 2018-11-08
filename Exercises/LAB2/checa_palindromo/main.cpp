#include <iostream>
#include <string>
#include "listaencadeada.h"

int main(){

    ListaEncadeada lista = ListaEncadeada();
    lista.insere_elemento(0);
    lista.insere_elemento(1);
    lista.insere_elemento(2);
    lista.insere_elemento(3);
    lista.insere_elemento(2);
    lista.insere_elemento(1);
    lista.insere_elemento(1);
    lista.imprimir();
    /*lista.remove_iesimo(0);
    lista.imprimir();
    lista.remove_iesimo(3);
    lista.imprimir();
    lista.insere_elemento(8);
    lista.insere_elemento(9);
    lista.insere_elemento(10);
    lista.imprimir();*/

    /*std::cout << lista.k_esimo(true, 0) << std::endl;
    std::cout << lista.k_esimo(true, 1) << std::endl;

    std::cout << lista.k_esimo(false, 0) << std::endl;
    std::cout << lista.k_esimo(false, 1) << std::endl;

    std::cout << lista.get_iesimo(0) << std::endl;*/

    if(lista.checa_palindromo() == true){
        std::cout << "Eh palimdromo!" << std::endl;
    }else{
        std::cout << "Nao eh palindromo!" << std::endl;
    }

    return 0;
}
