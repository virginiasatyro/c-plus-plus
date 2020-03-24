#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa{
    char nome[100];
    int idade;
    int ano;
    char cpf[20];
}t_pessoa; // tipo de dados

int main()
{
    t_pessoa p;

    strcpy(p.nome, "Virginia");
    p.idade = 26;

    cout << "Nome: " << p.nome << endl; // Nome: Virginia 
    cout << "Idade: " << p.idade << endl; // Idade: 26

    // t_pessoa* p2;
    // p2->idade = 26;

    // cout << "Idade: " << p2->idade << endl; // Idade: 26

    t_pessoa pessoas[100];
    t_pessoa* p1;

    p1 = &pessoas[0];

    pessoas[0].idade = 10;
    pessoas[1].idade = 11;
    pessoas[2].idade = 12;

    cout << (p1->idade) << endl; // 10
    cout << (p1 + 1)->idade << endl; // 11 
    cout << (p1 + 2)->idade << endl; // 12

    return 0;
}
