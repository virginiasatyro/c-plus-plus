#include <iostream>
#include <string.h>

using namespace std;

// public 
// private 
// protected

class Linguagem
{
    friend void classeAmiga(Linguagem*);
protected:
    char nome[100];
    
private:
    void mostrarNome()
    {
        cout << "Nome: " << nome << endl;
    }

public:
    void setNome(const char nome[])
    {
        strcpy(this->nome, nome);
    }
    void mostraNome2()
    {
        mostrarNome();
    }
};

void classeAmiga(Linguagem* l)
{
    cout << "Classe amiga diz: " << l->nome << endl;
}

int main()
{
    Linguagem l;

    l.setNome("C++");
    // l.mostrarNome();
    classeAmiga(&l);

    return 0;
}