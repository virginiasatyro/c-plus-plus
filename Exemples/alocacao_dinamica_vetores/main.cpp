#include <iostream>
#include <cstdlib>

/**********************************
    Normalmente, a alocação dinâmica é utilizada para criar
    vetores em tempo de execução.
    Ex:
        int *p = new int[10];
        Aloca um vetor de inteiros com 10 posições;
        O ponteiro p guarda o endereço (aponta) da
        primeira posição do vetor.
***********************************/

int *produto_interno(int n, int *vetor_a, int *vetor_b){
    int *resultado = new int[n];
    for(int i = 0; i < n; i++){
        resultado[i] = vetor_a[i] * vetor_b[i];
    }
    return resultado;
}

int main(){
    int vetor_a[3] = {1, 2, 3};
    int vetor_b[3] = {3, 2, 1};
    int *resultado = produto_interno(3, vetor_a, vetor_b);

    /*  ou podemos utilizar:
        int *resultado = nullptr;
        resultado = produto(3, vetor_a, vetor_b); */

    for(int i = 0; i < 3; i++){
        std::cout << resultado[i] << " ";
    }
    delete[] resultado; // para vetores usamos delete[]
    return 0;
}
