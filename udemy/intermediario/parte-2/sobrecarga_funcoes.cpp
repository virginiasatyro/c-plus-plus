/*
* Sobrecarga de Nomes de Funções
* 
* C++ permite que hajam funções com o mesmo nome. 
* Essas funções precisam se diferenciar pelo número ou pelos tipos de argumentos. Isso é chamado de sobrecarga de funções.
*/

#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "numero: " << n << endl;
}

void mensagem()
{
    cout << "Hello world!" << endl;
}

void mensagem(char c)
{
    cout << "Caractere: " << c << endl;
}

int soma(int n1, int n2)
{
    return n1 + n2;
}

int soma(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

int main()
{
    mensagem();
    mensagem(10);
    mensagem('a');

    cout << soma(1, 2) << endl;
    cout << soma(1, 2, 3) << endl;

    return 0;
}
