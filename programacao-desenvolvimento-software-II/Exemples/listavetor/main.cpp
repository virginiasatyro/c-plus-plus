#include <iostream>
#include "listavetor.h"

int main(){
    ListaVetorInteiros lista_impar = ListaVetorInteiros();
    ListaVetorInteiros lista_par   = ListaVetorInteiros();

    int aux1 = 1, aux2 = 2;

    for(int i = 0; i < 1000; i++){
        aux1 = i*2 + 1;
        lista_impar.inserir_elemento(aux1);
        aux2 = i*2;
        lista_par.inserir_elemento(aux2);
    }
    lista_impar.imprimir();
    std::cout << std::endl;
    lista_par.imprimir();

    return 0;
}
