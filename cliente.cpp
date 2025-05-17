#include <iostream>
#include <string>
using namespace std;
#include "cliente.h"

//Construtor
Cliente::Cliente(std::string n, std::string c){
    nome = n;
    cpf = c;
}

//Getter nome
std::string Cliente::getNome(){
    return nome;
}

//Getter CPF
std::string Cliente::getCpf(){
    return cpf;
}
