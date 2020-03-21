#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[])
{
    int tam;
    for(tam = 0; nome[tam]; tam++);
    for(int i = tam - 1; i >= 0; i--){
        cout << nome[i];
    }
    cout << endl;
}

int main()
{
    char nome[] = {'v', 'i', 'r', 'g', 'i', 'n', 'i', 'a', '\0'};
    cout << nome << endl;

    int i = 0;
    while (nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }
    cout << endl;

    i = 0;
    do
    {
        cout << nome[i];
    } while (nome[i++]);
    cout << endl;

    inverte(nome);

    int tam = strlen(nome);
    cout << "Tamanho da string: " << tam << endl;

    char exemplo[] = "exemplo";

    if(isalpha(exemplo[0]))
    {
        cout << "caractere alfabetico" << endl;
    }
    else
    {
        cout << "caractere numerico" << endl;
    }

    // isdigit(str) -> retorna true caso seja verdadeiro 
    // isupper(str) -> returna true caso a letra seja maiúscula
    // isspace(str) -> retorna true caso seja um espaço
    // strcmp(str1, str2) -> compara duas strings
    // tolower(str) -> retorna versao em minusculo 
    // toupper(str) -> retorna versao um maiúsculo
    // strcat(str1, str2) -> concatenação de strings 
    // strstr(str1, str2) -> verifica de str2 é substring de str1
    
    return 0;
}