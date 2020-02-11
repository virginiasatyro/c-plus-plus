#include <iostream>

#include "paciente.h"
#include "virus.h"

int main(void){

    Virus *ebola = new Virus("Ebola", 1);
    Paciente flavio("Flavio", 0.5, ebola);
    Paciente joao("Joao", 0.9);

    std::cout << "O Paciente " << flavio.get_nome() << std::endl;
    std::cout << "Esta infectado? " << flavio.esta_infectado() << std::endl;

    return 0;
}
