//
// Created by davi on 3/6/19.
//

#ifndef RELOGIO_RELOGIO_H
#define RELOGIO_RELOGIO_H


class Relogio {

private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio();
    Relogio( int, int, int );

    int getHora();
    int getMinuto();
    int getSegundo();

    void setHora( int );
    void setMinuto( int );
    void setSegundo( int );

    void setRelogio( int, int, int );
};


#endif //RELOGIO_RELOGIO_H
