/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 1
 */

#include <iostream>
#include "Motor.h"
#include "Veiculo.h"
#include "CarroPasseio.h"

using namespace std;

int main() {
    CarroPasseio carroPasseio;

    carroPasseio.setModelo("HB20");
    carroPasseio.setCor("Preto");
    carroPasseio.setNumCilindro(3);
    carroPasseio.setPotencia(80);
    carroPasseio.setPeso(900);
    carroPasseio.setVelocMax(180);
    carroPasseio.setPreco(40000);

    cout << "\n" << carroPasseio.getModelo() << " - " << carroPasseio.getCor() << endl;
    cout << "Motor: \n- Cilindros: " << carroPasseio.getNumCilindro() << "\n- Potencia: " << carroPasseio.getPotencia() << endl;
    cout << "Veiculo: \n- Peso: " << carroPasseio.getPeso() << "\n- Velocidade máxima: " << carroPasseio.getVelocMax() << "\n- Preço: " << carroPasseio.getPreco() << endl;

    return 0;
}