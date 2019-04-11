#ifndef EX1_DIAGRAMA_CLIENTE_H
#define EX1_DIAGRAMA_CLIENTE_H


class Cliente {

private:

    char* nome;
    char* cpf;
    char* endereco;


public:

    Cliente();
    Cliente(char*, char*, char*);
    ~Cliente();

    void setNome( char* );
    char* getNome();

    void setCpf( char* );
    char* getCpf();

    void setEndereco( char* );
    char* getEndereco();
};


#endif //EX1_DIAGRAMA_CLIENTE_H
