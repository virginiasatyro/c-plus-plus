#ifndef PDS2_FORMA3D_H
#define PDS2_FORMA3D_H

#include "forma.h"
#include <iostream>

class Forma3D : public Forma{
public:
    Forma3D(double cor, double x) : Forma(cor, x){}
    virtual double get_volume() const = 0;
};

#endif // PDS2_FORMA3D_H
