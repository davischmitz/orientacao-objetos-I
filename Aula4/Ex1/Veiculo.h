//
// Created by davi on 3/31/19.
//

#ifndef EX1_VEICULO_H
#define EX1_VEICULO_H


class Veiculo {

private:

    int peso;
    int velocMax;
    float preco;

public:

    Veiculo();
    Veiculo(int, int, float);
    ~Veiculo();

    void setPeso(int);
    int getPeso();

    void setVelocMax(int);
    int getVelocMax();

    void setPreco(float);
    float getPreco();

};


#endif //EX1_VEICULO_H
