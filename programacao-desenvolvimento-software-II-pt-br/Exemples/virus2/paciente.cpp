#include "paciente.h"

Paciente::Paciente(std::string nome, double resistencia, Virus *virus) {
    _nome        = nome;
    _resistencia = resistencia;
    _infectado   = true;
    _virus       = virus;
}

Paciente::Paciente(std::string nome, double resistencia) {
    _nome = nome;
    _resistencia = resistencia;
    _infectado = false;
    _virus = nullptr;
}

bool Paciente::esta_infectado() {
    return _infectado;
}

std::string Paciente::get_nome() {
    return _nome;
}

Virus *Paciente::get_virus() {
    return _virus;
}

void Paciente::contato(Paciente &contato) {
    if (contato.esta_infectado() && !this->esta_infectado()) {
        if (contato.get_virus()->get_forca() > _resistencia) {
            _infectado = true;
            _virus = contato.get_virus();
        }
    }
}

void Paciente::curar() {
    _infectado = false;
    _virus = nullptr;
}
