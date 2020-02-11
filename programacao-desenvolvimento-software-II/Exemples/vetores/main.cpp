#include <iostream>

int main(){

    int n = 0.0;
    std::cout << "Digite o numero de elementos: ";
    std::cin >> n;

    int dados[n];
    for(int i = 0; i < n; i++){
        std::cout << "Digite o " << i + 1 << "-esimo numero: ";
        std::cin >> dados[i];
    }

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += dados[i];
    }
    std::cout << "A soma foi: " << soma << std::endl;

    return 0;
}
