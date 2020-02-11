#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

#include <iostream>
#include <string>

class Forma{
protected:
    double cor;
    double x;
    //std::string _nome;
public:
    Forma(double = 0, double = 0);
    virtual double get_cor() const = 0;
    //virtual std::string get_nome() const = 0;
};

#endif // PDS2_FORMA_H
