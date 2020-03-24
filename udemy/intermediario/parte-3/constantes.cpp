#include <iostream>

using namespace std;

int main()
{
    int var = 10;
    int* p1, *p2;

    p1 = &var;
    p2 = &var;

    cout << p1 << endl;   // 0x7ffc9d211444
    cout << p2 << endl;   // 0x7ffc9d211444
    cout << &var << endl; // 0x7ffc9d211444

    if(p1 == p2)
    {
        cout << "p1 contem o mesmo endereço de p2 - aponta para o mesmo local!" << endl;
    }

    *p2 = 20;
    *p2 = 15;

    cout << var << endl; // 15

    int vet[] = {1, 2, 3};
    int *p3 = &vet[0], *p4 = &vet[1];

    cout << p3 << endl; // 0x7ffd672b9e50
    cout << p4 << endl; // 0x7ffd672b9e54
   
    cout << *p3 << endl; // 1 
    cout << *p4 << endl; // 2
    cout << *(p4 + 1) << endl; // 3

    // --------------------------------------------------
    const double PI = 3.1415; // variável constante

    cout << PI << endl;

    const int vet2[] = {1, 2, 3};
    const int* p5 = &vet2[0]; // ponteiro para array de constante int 
    int const* p6 = &vet2[1]; // ponteiro para array de constante int 
    // acima - podemos modificar os ponteiros, mas não os inteiros para os quais eles apontam

    p5 = &vet2[0];
    p6 = &vet2[1];

    cout << *p5 << endl;
    cout << *p6 << endl;

    // *p5 = 10; <<< Errado! Não podemos modificar o valor!

    int* const p7 = new int[3]; // ponteiro constante - não é possível alterar o ponteiro
    // alocando espaço para 3 elementos 
    *p7 = 1;
    *(p7 + 1) = 2;
    *(p7 + 2) = 3;
 
    cout << *p7 << endl; // 1 
    cout << *(p7 + 1) << endl; // 2 
    cout << *(p7 + 2) << endl; // 3

    // --------------------------------------------------
    const char* const p8 = "Virginia"; // não é possível alternar o ponteiro, e nem os caracteres apontados
    // ponteiro constate - caracteres constantes

    return 0;
}