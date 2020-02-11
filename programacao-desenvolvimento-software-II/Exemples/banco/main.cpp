#include <iostream>
#include <string>

/**
    Módulos que serão utilizados:
*/
#include "agencia.h"
#include "banco.h"
#include "cliente.h"
#include "conta.h"

int main(void){
    Banco banco = Banco(1, "Banco do Brasil"); // Construtor
    /**
        Objetos:
    */
    Agencia &agencia = banco.cria_agencia("Antonio Carlos, 6667", "Pampulha", "Belo Horizonte", 3217901);

    // adicionando novo cliente
    agencia.adiciona_cliente(1, "Flavio Figueiredo");
    // criando uma conta (no momento, 1 conta por cliente
    Conta &conta = agencia.cria_conta(1);

    std::cout << "Saldo de Flavio " << conta.get_saldo() << std::endl;
    conta.depositar(200);
    std::cout << "Saldo de Flavio " << conta.get_saldo() << std::endl;
}
