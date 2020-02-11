#include "quadrado.h"

Quadrado::Quadrado(double cor, double lado) : Forma2D(cor, lado){
    this -> lado = lado;
    this -> cor = cor;
}

double Quadrado::get_largura() const{
    return lado;
}

double Quadrado::get_area() const{
    return lado * lado;
}

double Quadrado::get_perimetro() const{
    return 4 * lado;
}
