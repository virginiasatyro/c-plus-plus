#include "paciente.h"

Paciente::Paciente(std::string nome, double resistencia){
    _nome = nome;
    _resistencia = resistencia;
    _infectado = false;
    _virus = nullptr;
}
