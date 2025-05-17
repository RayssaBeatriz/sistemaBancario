#include <iostream>
#include <string>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

//Classe cliente
class Cliente {
    private:
    std::string nome;
    std::string  cpf;

    public: 
    Cliente(std::string n, std::string c);
    std::string  getNome();
    std::string getCpf();
};
#endif