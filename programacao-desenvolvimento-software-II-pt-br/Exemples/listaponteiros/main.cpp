#include <iostream>
#include <string>
#include "listasimples.h"
/**
    Não funciona!!! Encontrar erros
*/

int main(){

    ListaSimplesmenteEncadeada lista = ListaSimplesmenteEncadeada();
    lista.inserir_elemento(2);
    lista.imprimir();
    lista.remove_iesimo(0);
    lista.imprimir();

    return 0;
}
