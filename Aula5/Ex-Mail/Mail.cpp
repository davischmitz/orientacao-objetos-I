//
// Created by davi on 3/27/19.
//
#include <iostream>
#include "Mail.h"

using namespace std;


Mail::Mail() {
    pos = 0;
}
Mail::~Mail() {}

void Mail::setRemetente(Contato r) {
    remetente = r;
}

Contato Mail::getRemetente() {
    return remetente;
}

void Mail::addDestinatario(Contato d) {
    if(pos < 10) {
        destinatarios[pos++] = d;
    }
}

Contato Mail::getDestinatario(int indice) {
    return destinatarios[indice];
}

void Mail::setCorpo(char *c) {
    corpo = c;
}

char* Mail::getCorpo() {
    return corpo;
}

void Mail::setAssunto(char *a) {
    assunto = a;
}

char* Mail::getAssunto() {
    return assunto;
}

void Mail::print() {
    cout << "Nome Rem: " << remetente.getNome() << endl;
    cout << "Email Rem: " << remetente.getEmail() << endl;
    cout << "Nome dest1: " << destinatarios[0].getNome() << endl;
    cout << "Email dest2: " << destinatarios[0].getEmail() << endl;
    cout << "Nome dest2: " << destinatarios[1].getNome() << endl;
    cout << "Email dest2: " << destinatarios[1].getEmail() << endl;
    cout << "Assunto: " << assunto << endl;
    cout << "Corpo: " << corpo << endl;

}