#include <iostream>
#define SIZE 5

int main(){
    long value1 = 200000;
    long value2;

    long *long_ptr; // variavel long_ptr é um ponteiro do tipo long
    long_ptr = &value1; // long_ptr guarda endereço da variável value1

    //imprima o valor do objeto apontado por long_ptr
    std::cout << *long_ptr << " ";

    value2 = *long_ptr; // atribuição do valor do objeto apontado por long_ptr a value2

    //Imprima o valor de value2
    std::cout << value2 << " ";

    //Imprima o endereço de value1
    std::cout << &value1 << " ";

    //Imprima o endereço armazenado em long_ptr
    std::cout << long_ptr << " "; // o valor impresso é o mesmo que o endereço de value1

    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    std::cout << (&value1 == long_ptr) << " ";


    unsigned int values[SIZE] = {2, 4, 6, 8, 10}; // array de 5 elementos
    unsigned int *v_ptr = new (unsigned int); // ponteiro para objeto do tipo unsigned int
    //imprimir os elementos do array values usando notação de array subscrito.
    for(int i = 0; i < SIZE; i++){
        std::cout << values[i] << " ";
    }

    v_ptr = &values[0]; // 2 instrucoes que atribuem o endereco inicial do array
                        // values a variavel ponteiro v_ptr

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    for(int i = 0; i < SIZE; i++){
        std::cout << *(v_ptr + i) << " ";
    }

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    for(int i = 0; i < SIZE; i++){
        std::cout << *(values + i) << " ";
    }

    //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    for(int i = 0; i < SIZE; i++){
        std::cout << v_ptr[i] << " ";
    }

    //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    std::cout << values[4] << " ";

    //a notação de ponteiro/deslocamento com o nome de array como o ponteiro,
    std::cout << *(values + 4) << " ";

    //a notação de subscrito de ponteiro,
    std::cout << v_ptr[4] << " ";

    //a notação de ponteiro/deslocamento.
    std::cout << *(v_ptr + 4) << " ";


    std::cout << (v_ptr + 3) << " ";  // endereço que é referenciado por v_ptr + 3
    std::cout << *(v_ptr + 3) << " "; // valor armazenado em v_ptr + 3

    //std::cout << &values[0] << " ";
    v_ptr = &values[4]; // v_ptr aponta para values[4]

    std::cout << (v_ptr - 4) << " ";
    //imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
    std::cout << ((v_ptr - 4) == (&values[0])) + 1;

    return 0;
}
