#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H

struct node_t{
    int elemento;
    node_t *anterior;
    node_t *proximo;
};

class ListaEncadeada{
private:
    node_t *_inicio;
    node_t *_fim;
    int _num_elementos_inseridos;
public:
    ListaEncadeada();
    ~ListaEncadeada();
    void insere_elemento(int elemento);
    void remover_iesimo(int i);
    void imprimir();
    int k_esimo(bool direcao, int k);
    int get_iesimo(int k);
    bool checa_palindromo();
};

#endif // PDS2_LISTADUPLA_H

