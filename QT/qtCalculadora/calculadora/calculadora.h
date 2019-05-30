#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QWidget>

namespace Ui {
class Calculadora;
}

class Calculadora : public QWidget
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = 0);
    ~Calculadora();

private slots:
    void on_soma_clicked();

    void on_subtracao_clicked();

    void on_multiplicacao_clicked();

    void on_divisao_clicked();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
