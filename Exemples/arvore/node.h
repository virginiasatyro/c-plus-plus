#ifndef PDS2_NODE_H
#define PDS2_NODE_H

class Node{
private:
    Node *_esquerda;
    Node *_direita;
    int _elemento;

public:
    Node(int valor);
    ~Node();

    // insere elemento abaixo do nó atual
    void inserir_elemento(int elemento);

    // verifica se o inteiro existe na sub-árvore
    bool tem_elemento(int elemento);

    // imprime a árvore deste nó para baixo
    void imprimir();
};

#endif // PDS2_NODE_H
