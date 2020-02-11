#include "aquecedor.h"

Aquecedor::Aquecedor(){
    _temperatura      = 20;
    _temperatura_max  = 40;
    _temperatura_min  = 10;
    _fator_incremento = 5;
}

Aquecedor::Aquecedor(double x,double y){
    _temperatura      = x;
    _fator_incremento = y;
}

void Aquecedor::aquecer(){
    if(_temperatura + _fator_incremento > _temperatura_max){
        return;
    }
    else{
        _temperatura += _fator_incremento;
    }
}

void Aquecedor::resfriar(){
    if(_temperatura - _fator_incremento < _temperatura_min){
        return;
    }else{
        _temperatura -= 5;
    }
}

double Aquecedor::get_temperatura(){
        return _temperatura;
    }

