#include <iostream>
#include <string>
using namespace std;
#include "cliente.h"

#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

//Classe conta bancaria
class ContaBancaria {
    private:
    int numero;
    double saldo;
    Cliente cliente;

    public:
    ContaBancaria(int n, Cliente c, double s);
    ContaBancaria(int n, Cliente c);
    void exibirSaldo();
    void exibirInformacoes();
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
};

#endif