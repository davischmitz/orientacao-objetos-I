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

    Contato remetente;
    Contato destinatarios[10];
    Mail mail;

    cout << "Digite o nome do remetente: " << endl;
    cin >> nome;

    cout << "Digite o email do remetente: " << endl;
    cin >> email;

    remetente.setNome(nome);
    remetente.setEmail(email);

    cout << "Digite o numero de destinatarios: " << endl;
    cin >> numeroDestinatarios;

    for(int i = 0; i < numeroDestinatarios; i++) {
        cout << "Digite o nome do destinatario: " << endl;
        cin >> nome;

        cout << "Digite o email do destinatario: " << endl;
        cin >> email;

        destinatarios[i].setEmail(nome);
        destinatarios[i].setEmail(email);
    }

    mail.setRemetente(remetente);

    for(int i = 0; i < numeroDestinatarios; i++) {
        mail.addDestinatario(destinatarios[i]);
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