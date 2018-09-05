    /**
    Guarda de segurança:
    Evita módulos com o mesmo nome.
    */
#ifndef PDS2_VIRUS_H
#define PDS2_VIRUS_H

#include <string>

class Virus{
private:
    /**
        Atributos privados
    */
    std::string _nome;
    double _forca;
public:
    /**
        Construtor
    */
    Virus(std::string nome, double forca);
    /**
        Métodos públicos
    */
    std::string get_nome();
    double get_forca();
};

    /**
    Fim da guarda!
    */

#endif // PDS
