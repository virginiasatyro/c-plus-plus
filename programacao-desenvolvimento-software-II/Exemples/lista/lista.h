#ifndef PDS2_LISTA_VETOR_H
#define PDS2_LISTA_VETOR_H

#define TAMANHO_INICIAL 100

class ListaVetorInteiros{
private:
    int *_elementos;              // vetor de elemntos que será alocado dinâmicamente (heap)
    int _num_elementos_inseridos;
    int _capacidade;

public:
    // Construtor
    ListaVetorInteiros();
    // Destrutor
    ~ListaVetorInteiros();
    // Insere um inteiro na lista
    void inserir_elemento(int elemento);
    // Imprime lista
    void imprimir();
};


#endif // PDS2_LISTA_VETOR_H
