//
// Created by davi on 3/27/19.
//

#ifndef EX_MAIL_CONTATO_H
#define EX_MAIL_CONTATO_H


class Contato {

private:

    char *nome;
    char *email;

public:

    Contato();
    ~Contato();
    void setNome(char *n);
    char* getNome();
    void setEmail(char *n);
    char* getEmail();
};


#endif //EX_MAIL_CONTATO_H
