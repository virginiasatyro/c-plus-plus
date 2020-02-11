// THREEDIM.H
// Defnition of class ThreeDimensionalShape
#ifndef THREEDIM_H
#define THREEDIM_H

#include "shape.h"

class Forma3D : public Forma{
public:
    Forma3D(string cor) : Forma(cor) { }
    virtual double get_volume() const = 0;
};

#endif
