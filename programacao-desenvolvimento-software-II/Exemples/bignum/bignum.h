#ifndef PDS2_BIGNUM_H
#define PDS2_BIGNUM_H

struct node_t{
    int valor;
    node_t *anterior;
    node_t *proximo;
};

class BigNum{
private:
    node_t *_inicio;
    node_t *_fim;

public:
    BigNum();
    ~BigNum();
    void incrementa();
    void decrementa();
    void imprimir();
};

#endif // PDS2_BBIGNUM_H
