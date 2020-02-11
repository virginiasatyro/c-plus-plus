#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor{
private:
    double _temperatura;
public:
    Aquecedor();
    void aquecer();
    void resfriar();
    double get_temperatura();
};

#endif // PDS2_AQUECEDOR_H
