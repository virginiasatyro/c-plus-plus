// CIRCLE.H
// Definition of class Circle
#ifndef CIRCLE_H
#define CIRCLE_H

#include "twodim.h"
#define PI 3.1415

class Circulo : public Forma2D{
public:
    Circulo(const string &, double);
    double get_raio();
    void set_raio(double);
    virtual double get_area() const;
    virtual double get_perimetro() const;

private:
    double raio;
};

#endif
