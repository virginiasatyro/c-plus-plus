#include <iostream>
#include <cstdlib>

/**********************************
    int i = NULL;    // OK, qual o valor de i?
    int i = nullptr; // Erro de compilacao
    int *p = NULL;   // OK, seguro
    int *p = nullptr;// OK, seguro
    *******************************/

int main(){
    int *ptr_a = nullptr;
    ptr_a = new int;

    if(ptr_a == nullptr){
        std::cout << "Memoria insuficiente!" << std::endl;
        exit(1);
    }

    std::cout << "Endereco de ptr_a: " << ptr_a << std::endl;
    *ptr_a = 90;
    std::cout << "Conteudo de ptr_a: " << *ptr_a << std::endl;
    delete ptr_a;

    return 0;
}
