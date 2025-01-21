#include <iostream>

using namespace std;

class Conta{
public:
    // atributos 
    int numero;
    double saldo;

    // métodos
    double depositar(double saldo);

    double retirar(double quantidade)
    {
        if(saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }

    double getSaldo()
    {
        return saldo;
    }
    int getNumero()
    {
        return numero;
    }
};

double Conta::depositar(double quantidade)
{
    if(quantidade > 0)
        this->saldo += quantidade;
    return saldo;
}

void foo(Conta* pc)
{
    pc->depositar(50);
}

// função que aceita argumento por referência
void foo2(Conta& c) // atenção! forma bastante interessante de fazer!
{
    c.depositar(50);
}

// função aloca novo objeto
// útil quando não sabemos quantos objetos iremos precisar
// retorna cada objeto
Conta* novaConta(int numero)
{
    Conta* c = new Conta;
    c->numero = numero;
    c->saldo = 0.0;

    return c;
}

int main()
{
    Conta c;

    c.numero = 1;
    c.saldo = 100.75;

    cout << "Saldo: " << c.saldo << endl;
    c.depositar(100);
    cout << "Saldo depois do depósito: " << c.saldo << endl;
    c.retirar(50);
    cout << "Saldo depois do saque: " << c.saldo << endl;

    Conta c2 = {2, 100.75};

    Conta* pc = &c;

    // 2 tipos de implementação equivalentes
    (*pc).numero = 3;
    (*pc).saldo = 200;

    pc->numero = 3;
    pc->saldo = 200;

    cout << "Saldo: " << pc->saldo << endl;
    pc->depositar(100);
    cout << "Saldo depois do depósito: " << pc->saldo << endl;
    pc->retirar(50);
    cout << "Saldo depois do saque: " << pc->saldo << endl;

    c.saldo = 200;
    cout << "c saldo: " << c.getSaldo() << endl;
    // foo(c); -> passagem por cópia - não modifica
    foo(&c); // endereço do objeto - passagem por referência
    cout << "c saldo: " << c.getSaldo() << endl;

    cout << "c saldo: " << c.getSaldo() << endl;
    foo2(c); // endereço do objeto - passagem por referência
    cout << "c saldo: " << c.getSaldo() << endl;

    Conta* c3 = novaConta(1111);
    cout << "c3 saldo: " << c3->getSaldo() << endl; // 0
    cout << "c3 numero: " << c3->getNumero() << endl; // 1111

    return 0;
}