#include "rectangle.h"

const float _LENGTH = 1.00;
const float _WIDTH = 1.00;

Rectangle::Rectangle(float length, float width){
    this -> set_length(length);
    this -> set_width(width);
}

Rectangle::Rectangle(void){
    this -> set_width(_WIDTH);
    this -> set_length(_LENGTH);
}

void Rectangle::set_length(float length){ // verifica se 0.0 < length < 20.0
    if(length > 0.0 && length < 20.0){
        return;
    }else{
        _length = length;
    }
}

void Rectangle::set_width(float width){  //verifica se 0.0 < width < 20.0
    if(width > 0.0 && width < 20.0){
        return;
    }else{
        _width = width;
    }
}

float Rectangle::get_length(){
    return _length;
}

float Rectangle::get_width(){
    return _width;
}

float Rectangle::perimeter(void){
    return 2*(this->get_length()) + 2*(this->get_width());
}

float Rectangle::area(void){
    return (this->get_length())*(this->get_width());
}

