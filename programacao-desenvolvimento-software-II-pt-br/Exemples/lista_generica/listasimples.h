#ifndef PDS2_LISTASIMPLES_H
#define PDS2_LISTASIMPLES_H

template <typename T>

struct node_t {
    T elemento;
    node_t *proximo;
};


template <typename T>
class ListaSimplesmenteEncadeada {
private:
    node_t<T> *_inicio;
    node_t<T> *_fim;
    int _num_elementos_inseridos;

public:
    ListaSimplesmenteEncadeada();
    ~ListaSimplesmenteEncadeada();
    void inserir_elemento(T elemento);
    void imprimir();
};


#endif
