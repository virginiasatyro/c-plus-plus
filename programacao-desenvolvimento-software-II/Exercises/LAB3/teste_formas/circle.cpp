// CIRCLE.CPP
// Member function definitions for Circle
#include "circle.h"
#include <iostream>
using std::cout;

Circulo::Circulo(const string &xcor, double xraio) : Forma2D(xcor) {
    set_raio(xraio);
}

void Circulo::set_raio(double xraio){
    raio = (xraio < 0.0) ? 0.0 : xraio;
}

double Circulo::get_raio(){
    return raio;
}

double Circulo::get_area() const{
    return PI * raio * raio;
}

double Circulo::get_perimetro() const{
    return 2 * PI * raio;
}
