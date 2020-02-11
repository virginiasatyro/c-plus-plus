#include "aquecedor.h"

Aquecedor::Aquecedor(){
    _temperatura = 20.00;
}

void Aquecedor::aquecer(){
    _temperatura += 5;
}

void Aquecedor::resfriar(){
    _temperatura -= 5;
}

double Aquecedor::get_temperatura(){
    return _temperatura;
}
