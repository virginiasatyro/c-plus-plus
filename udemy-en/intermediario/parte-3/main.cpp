#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char* array = new char[100];
    // NEW - gravando um bloco de memória - 100 caracteres na pilha.
    // NEW retorna um ponteiro para um array recém criado.

    // int argc - nnúmero de argumentos passados na linha de comando
    // char *argv[] - argumentos - array de ponteiro para strings.

    // primeiro argumento - é sempre o nome do próprio programa
    // exemplo: 'não passando' nenhum argumento na linha de comando
    cout << "argc: " << argc << endl; // 1
    cout << "argv[0]: " << argv[0] << endl; // ./main

    int n1 = 10, n2 = 20, n3 = 30;
    int* parray[3] = {&n1, &n2, &n3}; // array de 3 ponteiros para inteiros

    cout << *parray[0] << endl; // 10 
    cout << *parray[1] << endl; // 20 
    cout << *parray[2] << endl; // 30

    // --------------------------------------------------
    cout << "Quantidade de argumentos: " << argc << endl;
    cout << "Argumentos passados: " << endl;

    for(int i = 0; i < argc; i++)
        cout << argv[i] << endl;

    return 0;
}

/*
$ ./main python 
execução do programa: 
2 argumentos 
./main e python
*/
