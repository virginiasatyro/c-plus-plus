    /**
    Guarda de seguran�a:
    Evita m�dulos com o mesmo nome.
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
	Virus **_filhos; // guarda os filhos alocados. Todos no heap!
	int _numero_filhos; // numero de fihos atual
	static int _infeccoes_totais; // conta quantas infeccoes todos os virus j� causaram
	int _capacidade_reproducao;
public:
    /**
        Construtor
    */
    Virus(std::string nome, double forca, int capacidade_reproducao);
	/**
		Destrutor
	*/
	~Virus();
    /**
        M�todos p�blicos
    */
    std::string get_nome();
    double get_forca();
	Virus *reproduzir();
	static int get_infeccoes_totais(); // retorna quantas infeccoes todos os virus j� causaram
	void set_forca(double _forca);
};

    /**
    Fim da guarda!
    */

#endif // PDS
