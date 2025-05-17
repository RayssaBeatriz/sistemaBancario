#include <iostream>
#include <string>
using namespace std;
#include "cliente.h"
#include "contaBancaria.h"

int main() {
    // Criação dos clientes
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    // Exibe o saldo inicial da conta de Ana
    conta1.exibirInformacoes();
    conta1.exibirSaldo();

    // Ana transfere R$200 para Bruno
    conta1.transferir(200.0, conta2);
    conta2.exibirSaldo();

    // Ana transfere R$300 divididos entre Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);
    conta2.exibirSaldo();
    conta3.exibirSaldo();

    // Ana tenta transferir para Carla
    conta1.transferir(1000.0, conta3);

    conta1.exibirSaldo();
}
