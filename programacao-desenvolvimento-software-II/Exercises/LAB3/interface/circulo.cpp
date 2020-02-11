#include "forma.h"
#include "forma2d.h"
#include "circulo.h"

Circulo::Circulo(double cor, double raio) : Forma2D(cor, raio){
    raio = raio;
    cor = cor;
}

double Circulo::get_raio() const{
    return raio;
}

double Circulo::get_area() const{
    return PI * raio * raio;
}
double Circulo::get_perimetro() const{
    return 2 * PI * raio;
}
