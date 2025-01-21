#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "forma2d.h"

#define PI 3.1415

class Circulo : public Forma2D{
private:
    double raio;

public:
    Circulo(double = 0, double = 0);
    double get_raio() const;
    double get_area() const;
    double get_perimetro() const;
};

#endif // PDS2_CIRCULO_H
