#include <iostream> 
#include <string.h>

using namespace std;

class Pessoa
{
public:
    char nome[100];
    char cpf[20];
    int idade;
};

int getIdade(Pessoa pessoas[], char nome[]) // com warnings - sugestão "const char*" -> não compila
{
    int tam = sizeof(pessoas);

    for(int i = 0; i < tam; i++)
    {
        if(strcmp(nome, pessoas[i].nome) == 0)
            return pessoas[i].idade;
    }
    return -1;
}

int main()
{
    Pessoa p1; // p1 é um objeto da classe Pessoa

    strcpy(p1.nome, "Virginia");
    strcpy(p1.cpf, "11111111111");
    p1.idade = 26;

    cout << "Nome: " << p1.nome << endl; // Virginia

    Pessoa p2 = {"Maria", "22222222222", 55}; // inicialização

    cout << "Nome: " << p2.nome << endl; // Maria

    Pessoa pessoas[3] = { // 3 objetos 
        {"Joao", "00000000000", 30},
        {"Maria", "11111111111", 20},
        {"Pedro", "22222222222", 25},
    };

    cout << "Nome: " << pessoas[0].nome << endl; // Joao
    cout << "Nome: " << pessoas[1].nome << endl; // Maria 
    cout << "Nome: " << pessoas[2].nome << endl; // Pedro

    int idade = getIdade(pessoas, "Pedro");

    if(idade != -1)
        cout << "Idade do Pedro: " << idade << endl;
    else 
        cout << "Pessoa não encontrada." << endl;

    return 0;
}