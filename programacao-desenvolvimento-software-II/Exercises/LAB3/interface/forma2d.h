#ifndef PDS2_FORMA2D_H
#define PDS2_FORMA2D_H

#include "forma.h"


class Forma2D : public Forma{
public:
    Forma2D(double cor, double x) : Forma(cor, x){}
    virtual double get_area() const = 0;
    virtual double get_perimetro() const = 0;
};

#endif // PDS2_FORMA2D_H
