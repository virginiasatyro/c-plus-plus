// SHAPE.CPP
// Member and friend definitions for Shape
#include "shape.h"

Forma::Forma(const string &xcor){
    set_cor(xcor);
}

string Forma::get_cor() const{
    return cor;
}

void Forma::set_cor(const string &xcor) const{
    cor = xcor;
}

string Forma::get_nome() const{
    return nome;
}

void Forma::set_nome(const string &xnome) const{
    nome = xnome;
}

