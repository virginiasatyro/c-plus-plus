#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_

/**
  usem a struct 'node_t' para criar o atributo nó da lista. Notem que ela possui um campo inteiro
  e um ponteiro para o próximo nó. A lista deve conter referências para o primeiro
  e último nós.
*/

struct node_t {
	int elemento;
	node_t *proximo;
	node_t *anterior;
};

class ListaEncadeada{
private:
    node_t *_inicio;
    node_t *_fim;
    int _num_elementos_inseridos;

public:
    ListaEncadeada();
    ~ListaEncadeada();
    void imprimir();

    // (a) insere_elemento(int). Insere um elemento no fim da lista.
    void insere_elemento(int elemento);

    // (b) insere_primeiro(int). Insere um elemento no inicio da lista.
    void insere_primeiro(int elemento);

    // (c) get_iesimo(int). Retorna um elemento na posição i.
    int get_iesimo(int);

    // (d) remover_elemento(). Remove um elemento no fim da lista.
    void remover_elemento();

    // (e) remover_primeiro(). Remove o primeiro elemento da lista.
    void remover_primeiro();

    // (f) inserir_iesimo(int, int). Insere um elemento na posicão i.
    void inserir_iesimo(int elemento, int posicao);

    // (g) remover_iesimo(int). Remove um elemento na posição i
    void remover_iesimo(int);

    // (h) tamanho(). Retorna o tamanho da lista.
    int tamanho();
};

#endif /* LISTAENCADEADA_H_ */

