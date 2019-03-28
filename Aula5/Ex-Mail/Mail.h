//
// Created by davi on 3/27/19.
//

#ifndef EX_MAIL_MAIL_H
#define EX_MAIL_MAIL_H

#include "Contato.h"

class Mail {

private:

    Contato remetente;
    Contato destinatarios[10];
    char *assunto;
    char* corpo;
    int pos;

public:

    Mail();
    ~Mail();
    void setRemetente(Contato r);
    Contato getRemetente();
    void addDestinatario(Contato d);
    Contato getDestinatario(int indice);
    void setAssunto(char *a);
    char* getAssunto();
    void setCorpo(char *c);
    char* getCorpo();
    void print();
};


#endif //EX_MAIL_MAIL_H
