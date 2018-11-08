#include "virus.h"

int Virus::_infeccoes_totais = 0; // iniciamos fora do construtor! Compartilhado com todos os objetos (virus).

Virus::Virus(std::string nome, double forca, int capacidade_reproducao){
    _nome  = nome;
    _forca = forca;
	_capacidade_reproducao = capacidade_reproducao;
	_numero_filhos = 0;
	// vetor de tamanho capacidade_reproducao para os filhos (no heap)
	_filhos = new Virus*[capacidade_reproducao]();
	_infeccoes_totais++; // incrementamos ao criar novos virus
}

std::string Virus::get_nome(){ // '::' indica qual classe pertence o método
    return _nome;
}

double Virus::get_forca(){ // implementação do método
    return _forca;
}

Virus *Virus::reproduzir(){
	if(this->_numero_filhos == this->_capacidade_reproducao){
		return nullptr;
	}
	// Aloca um novo filhos
	Virus *novo_virus = new Virus(_nome, _forca, _capacidade_reproducao);
	_filhos[_numero_filhos] = novo_virus; // guarda copia em um vetor
	_numero_filhos += 1;                  // aumenta o número de filhos
	return _filhos[_numero_filhos - 1];   // retorna ponteiro para copia
}

int Virus::get_infeccoes_totais(){
	return Virus::_infeccoes_totais;  //<- pela CLASSE - ou _infeccoes_totais ou this->_infeccoes_totais (pelo objeto)
}

void Virus::set_forca(double nova_forca){
	_forca = nova_forca;
	for(int i = 0; i < _numero_filhos; i++){
		_filhos[i].set_forca(nova_forca);
	}
}

Virus::~Virus(){
	if(_filhos != nullptr){
		for(int i = 0; i < _numero_filhos; i++)
			if(_filhos[i] != nullptr)
		delete _filhos[i];
		delete[] _filhos;

	}
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
