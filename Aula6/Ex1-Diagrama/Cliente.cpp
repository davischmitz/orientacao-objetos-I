#include "Cliente.h"

Cliente::Cliente() {
    this-> nome = "";
    this-> cpf = "";
    this-> endereco = "";
}

Cliente::Cliente(char * nome, char * cpf, char * endereco) {
    this-> nome = nome;
    this-> cpf = cpf;
    this-> endereco = endereco;
}

Cliente::~Cliente() {}

void Cliente::setNome(char *nome) {
    this-> nome = nome;
}

char* Cliente::getNome() {
    return nome;
}

void Cliente::setCpf(char *cpf) {
    this-> cpf = cpf;
}

char* Cliente::getCpf() {
    return cpf;
}

void Cliente::setEndereco(char *endereco) {
    this-> endereco = endereco;
}

char* Cliente::getEndereco() {
    return endereco;
}

