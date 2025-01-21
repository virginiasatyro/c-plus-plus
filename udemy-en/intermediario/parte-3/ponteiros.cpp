#include <iostream>
#include <string.h>

using namespace std;

void foo(int n)
{
    n = 100;
}

void foo2(int* n)
{
    *n = 100;
}

void foo3(int aux[])
{
    aux[0] = 1000;
}

char * my_strcat(char * dest, char * orig); // função que retorna um ponteiro

int my_strlen(char * str);

int main()
{
    int var = 10;
    int* pvar; // int * pvar = int *pvar

    pvar = &var; // inicializa ponteiro - o ponteiro aponta para o endereço da variável var
    cout << *pvar << endl; // 10

    // *pvar = 20; // muda o conteúdo guardado no ponteiro anteriormente
    // cout << *pvar << endl; // 20
    // cout << pvar << endl;  // 0x7fff0e895b1c
    // cout << &pvar << endl; // 0x7fff0e895b20

    pvar = &var;
    
    foo(var); // não modifica var 
    cout << var << endl; // 10

    foo2(pvar); // = foo2(&var);
    cout << var << endl; // 100

    foo2(&var); // passagem por referência
    cout << var << endl; // 100

    // --------------------------------------------------
    // new - aloca memória 
    int* vet = new int[10]; // aloca espaço na memória para 10 inteiros  

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30; 

    cout << *(vet + 0) << endl; // 10
    cout << *(vet + 1) << endl; // 20 
    cout << *(vet + 2) << endl; // 30

    foo3(vet); // a função modifica o vetor
    cout << *(vet + 0) << endl; // 1000

    int aux[3];
    
    aux[0] = 1;
    aux[1] = 2;
    aux[2] = 3;

    cout << *(aux + 0) << endl; // 1 - *(aux)
    cout << *(aux + 1) << endl; // 2 
    cout << *(aux + 2) << endl; // 3

    foo3(aux); // a função modifica o vetor
    cout << *(aux + 0) << endl; // 1000

    // o nome do vetor já é o endereço para o primeiro elemento 
    // por isso passamos um vetor por referência dessa forma.

    // --------------------------------------------------
    for(int i = 0; i < sizeof(aux)/sizeof(int); i++)
    {
       cout << aux[i] << endl;
    }

    // --------------------------------------------------
    cout << "Digite um numero: " << endl;
    cin >> *(aux);
    cout << "Voce digitou: " << aux[0] << endl;

    cout << "Digite um numero: " << endl;
    cin >> *(aux + 1);
    cout << "Voce digitou: " << aux[1] << endl;
    // também funcionaria caso declarássemos aux como: int* vet = new int[3]

    delete[] vet; // limpa o vetor declarado como: int* vet = new int[3]

    // --------------------------------------------------
    // boa prática: zerar um ponteiro quando tiver apagado um bloco de memória para onde ele aponta
    pvar = NULL; // zerando o ponteiro

    // --------------------------------------------------
    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[0]; // o ponteiro aponta para o primeiro elemento do array

    cout << "Conteudo de *parray: " << *parray << endl; // 1

    int **pparray = &parray; // ponteiro para ponteiro 
    // armazena o endereço de um ponteiro - que guarda um endereço do primeiro elemento do vetor
    
    cout << "Conteudo de **pparray: " << **pparray << endl;; // 1

    int i = 0;
    while (i < 5)
    {
        // operações sobre variáveis do tipo ponteiros
        cout << *parray << endl; 
        parray = parray + 1;
        i++;
        // imprime todos os valores do array: 1 2 3 4 5
    }

    cout << "Indexacao array[0] = " << array[0] << endl; // 1 -> mesmo que: *(parray + 0)
  
    // --------------------------------------------------
    char nome[] = "aprendendo c++";
    int tam = strlen(nome);

    // mostrar uma string invertida 
    char *p = &nome[tam];
    char *pfim = &nome[tam];
    char *pini = &nome[0];

    while (true)
    {
        cout << *p;
        if(p == pini) break;
        p--;
    }

    cout << endl;

    // --------------------------------------------------
    char * nome1 = new char[100];
    char * nome2 = new char[100];

    cout << "Digite o primeiro nome: ";
    cin >> nome1;
    cout << "Digite o segundo nome: ";
    cin >> nome2;
    
    cout << "Resultado: " << my_strcat(nome1, nome2) << endl;

    return 0;
}


char * my_strcat(char * dest, char * orig) // função que retorna um ponteiro
{
    char * resultado;

    int tam_dest = my_strlen(dest);
    int tam_orig = my_strlen(orig);

    resultado = new char[tam_dest + tam_orig];
    char *p_str = resultado;

    while (*dest != '\0')
    {
        *p_str = *dest;
        p_str++;
        dest++; 
    }
    while (*orig != '\0')
    {
        *p_str = *orig;
        p_str++;
        orig++; 
    }
    *p_str = '\0';

    return resultado;
}

int my_strlen(char * str) // conta numero de caracteres na string 
{
    int tam = 0;

    while (*str != '\0')
    {
        str++; // incremento de ponteiro - para apontar para próximo elemento
        tam++;
    }

    return tam;
}