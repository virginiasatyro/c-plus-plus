#ifndef CARRO_H
#define CARRO_H

#include <string>

using namespace std;

class Carro{
public:
    static int pneus;
    Carro(); // construtor
    Carro(string marca, int ano); // segundo construtor
    ~Carro();
    void setMarca(string marca); // método
    string getMarca();
    void setAno(int ano);
    int getAno();

private:
    string marca; // atributo
    int ano;
};

#endif // CARRO_H