#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "forma2d.h"

class Quadrado : public Forma2D{
private:
    double lado;

public:
    Quadrado(double = 0, double = 0);
    double get_largura() const;
    double get_area() const;
    double get_perimetro() const;
};

#endif // PDS2_QUADRADO_H
