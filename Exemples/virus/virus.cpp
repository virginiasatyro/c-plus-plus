#include "virus.h"

Virus::Virus(std::string nome, double forca){
    _nome  = nome;
    _forca = forca;
}

std::string Virus::get_nome(){ // '::' indica qual classe pertence o método
    return _nome;
}

double Virus::get_forca(){ // implementação do método
    return _forca;
}

/* Também podemos implementtar:
THIS é um ponteiro para o prórpio objeto!
Virus::Virus(std::string nome, double forca){
    this->nome  = nome;
    this->forca = forca;
}

std::string Virus::get_nome(){
    return this->nome;
}

double Virus::get_forca(){
    return this->forca;
}
*/
