#include <iostream>
#include <string>
using namespace std;
#include "contaBancaria.h"

//Construtor com parâmetro de saldo
ContaBancaria::ContaBancaria(int n, Cliente c, double s):cliente(c){
    numero = n;
    saldo = s;
    cliente = c;
}

//Construtor sem parâmetro de saldo
ContaBancaria::ContaBancaria(int n, Cliente c):cliente(c){
    numero = n;
    saldo = 0;
    cliente = c;
}

//Exibir saldo da conta
void ContaBancaria::exibirSaldo(){
    cout << "Saldo de " << cliente.getNome() << ": R$" << saldo << endl;
    cout << endl;
}

//Exibir informações da conta
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << cliente.getNome() << endl;
    cout << "Número da conta: " << numero << endl;
    cout << "CPF: " << cliente.getCpf() << endl;
}

//Depositar dinheiro
void ContaBancaria::depositar(double valor){
    saldo = saldo + valor;
}

//Sacar dinheiro
void ContaBancaria::sacar(double valor){
    //Verificar se tem saldo
    if(saldo >= valor){
        saldo = saldo - valor;
    } else{
        cout << "Você não possui saldo suficiente para essa saque." << endl;
    }
}

//Tranferir dinheiro para uma conta
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    //Verificar se tem saldo
    if(saldo < valor){
        cout << "Você não possui saldo suficiente para essa transferência." << endl;
    }
     else{
        saldo = saldo - valor;
        destino.saldo = destino.saldo + valor;
    }
}

//Transferir dinheiro para duas contas
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    //verificar se tem saldo
    if(saldo < valor){
        cout << "Você não possui saldo suficiente para essa transferência" << endl;
    } else{
        saldo = saldo - valor;
        destino1.saldo = destino1.saldo + valor/2;
        destino2.saldo = destino2.saldo + valor/2;
    }
}