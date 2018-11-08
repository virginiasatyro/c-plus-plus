#include <iostream>
#include "node.h"
#include "lista_encadeada.h"


int main(void) {

    //Node* node = new Node(0.0);

    ListaEncadeada L = ListaEncadeada();
    //L.insere_value(0.0);
    for(float i = 1.0;i < 10; i++){ // float
       // Node* n=new Node(i);
        L.insere_value(i);
    }

//    L.imprime_lista();
//    delete node;

    /*deve imprimir
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
    */
}
