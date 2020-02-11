#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor{
private:
    double _temperatura;
    double _temperatura_max;
    double _temperatura_min;
    double _fator_incremento;
public:
    Aquecedor();
    Aquecedor(double,double);
    void aquecer();
    void resfriar();
    double get_temperatura();
};

#endif
