#include <iostream>

int inc(int x){
    return ++x;
}

int main(){

    int a = 10;
    int b = inc(a);

    std::cout << a << std::endl;  // retorna 10 (valor de a)
    std::cout << b << std::endl;  // retorna 11 (valor de 'a' incrementado eh atribuido a 'b')
    std::cout << &a << std::endl; // retorna endereco de 'a'
    std::cout << &b << std::endl; // retorna endereco de 'b'

    return 0;
}
