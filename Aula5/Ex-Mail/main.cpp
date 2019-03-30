#include <iostream>
#include "Contato.h"
#include "Mail.h"

using namespace std;

int main() {

    char nome[10];
    char email[20];
    char assunto[20];
    char corpo[50];
    int numeroDestinatarios = 0;

//    Contato remetente, destinatarioA, destinatarioB, destinatarioC;
    Contato remetente, destinatario;
    Mail mail;

    cout << "Digite o nome do remetente: " << endl;
    cin >> nome;

    cout << "Digite o email do remetente: " << endl;
    cin >> email;

    remetente.setNome(nome);
    remetente.setEmail(email);
    mail.setRemetente(remetente);

    cout << "Digite o numero de destinatarios: " << endl;
    cin >> numeroDestinatarios;

    /*destinatarioA.setNome("Davi");
    destinatarioA.setEmail("davi@davi.com");

    destinatarioB.setNome("Mateus");
    destinatarioB.setEmail("mateus@mateus.com");

    destinatarioC.setNome("aline");
    destinatarioC.setEmail("aline@aline.com");

    mail.addDestinatario(destinatarioA);
    mail.addDestinatario(destinatarioB);
    mail.addDestinatario(destinatarioC);*/

    for(int i = 0; i < numeroDestinatarios; i++) {
        nome[0] = '\0';
        email[0] = '\0';
        cout << "Digite o nome do destinatario: " << endl;
        cin >> nome;

        cout << "Digite o email do destinatario: " << endl;
        cin >> email;

        destinatario.setNome(nome);
        destinatario.setEmail(email);
        mail.addDestinatario(destinatario);
    }

    cout << "Digite o assunto do email: " << endl;
    cin >> assunto;

    cout << "Digite o corpo do email: " << endl;
    cin >> corpo;

    mail.setAssunto(assunto);
    mail.setCorpo(corpo);
    mail.print();


    return 0;
}