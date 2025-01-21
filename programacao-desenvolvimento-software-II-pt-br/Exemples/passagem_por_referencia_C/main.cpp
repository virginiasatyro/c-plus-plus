#include <iostream>

int inc(int *x){
    *x = *x + 1;
    return *x;
}

int main(){

    int a = 10;
    int b = inc(&a);

    std::cout << a << std::endl;  // retorna 11 ('a' uncrementado)
    std::cout << b << std::endl;  // retorna 11 (saida da funcao)
    std::cout << &a << std::endl; // retorna endereco de a
    std::cout << &b << std::endl; // retorna endereco de b

    return 0;
}
