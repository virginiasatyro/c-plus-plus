#ifndef PDS2_CONTA_H
#define PDS2_CONTA_H


class Conta {
private:
    int _numero;
    double _saldo;

public:
    Conta(int numero);

  /*
   * Saca um valor. Levanta exce��o caso o saldo fique negativo.
   */
    void sacar(double valor);

  /*
   * Deposita um valor.
   */
    void depositar(double valor);

  /*
   * Retorna o n�mero da conta.
   */
    int get_numero();

  /*
   * Retorna o saldo da conta.
   */
    double get_saldo();
};

#endif
