#include "bignum.h"

void BigNum::incrementa(){
    node_t *digito_atual = this -> _fim;

    while(1){
        if(digito_atual -> valor < 9){
            digito_atual -> valor += 1;
            break;
        }
        if(digito_atual -> anterior == nullptr){
            digito_atual -> anterior = new node_t();
            digito_atual -> anterior -> proximo = digito_atual;
            this -> _inicio = digito_atual -> anterior;
            this -> _inicio -> proximo = digito_atual;
        }
        digito_atual -> valor = 0;
        digito_atual -> anterior = nullptr;
        digito_atual = digito_atual -> anterior;
    }
}
