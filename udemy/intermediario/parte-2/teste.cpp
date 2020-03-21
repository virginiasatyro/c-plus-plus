#include <iostream>

using namespace std;

bool par(int num)
{
    if(num%2 == 0)
        return true;
    return false;
}

void mensagem();

int main()
{
    int n;

    mensagem();

    cout << "Digite um numero: " << endl;
    cin >> n;

    if(par(n))
        cout << "O numero " << n << " eh par." << endl;
    else
        cout << "O numero " << n << " eh impar." << endl;
    return 0;
}

void mensagem()
{
    cout << "Aprendendo c++!" << endl;
}