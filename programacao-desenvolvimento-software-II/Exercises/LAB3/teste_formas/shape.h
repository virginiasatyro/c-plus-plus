// SHAPE.H
// Definition of base-class Shape
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Forma{
public:
    Forma(const string &);
    virtual string get_cor() const;
    virtual void set_cor() const;
    virtual string get_nome() const;
    void set_nome();

protected:
    string cor;
    string nome;
};

#endif
