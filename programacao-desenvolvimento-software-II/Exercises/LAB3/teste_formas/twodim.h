// TWODIM.H
// Defnition of class TwoDimensionalShape
#ifndef TWODIM_H
#define TWODIM_H

#include "shape.h"

class Forma2D : public Forma{
public:
    Forma2D(string cor) : Forma(cor){ }
    virtual double get_area() const = 0;
    virtual double get_perimetro() const = 0;
};

#endif
