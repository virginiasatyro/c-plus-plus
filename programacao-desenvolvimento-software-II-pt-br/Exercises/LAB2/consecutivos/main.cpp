#include <iostream>
#include "listaencadeada.h"


int main(){

    ListaEncadeada l = ListaEncadeada();

    l.insere_elemento(1);
    l.insere_elemento(1);
    l.insere_elemento(2);
    l.insere_elemento(1);
    l.insere_elemento(2);
    l.insere_elemento(2);
    l.insere_elemento(3);
    l.insere_elemento(1);
    l.insere_elemento(3);
    l.insere_elemento(3);
    l.insere_elemento(3);
    l.insere_elemento(2);

    l.imprimir();

    l.remove_consecutivos();
    l.imprimir();
    l.get_iesimo(0); //o zero eh o 1

    return 0;
}
