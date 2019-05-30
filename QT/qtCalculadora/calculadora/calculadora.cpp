#include "calculadora.h"
#include "ui_calculadora.h"

Calculadora::Calculadora(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculadora)
{
    ui->setupUi(this);
}

Calculadora::~Calculadora()
{
    delete ui;
}

void Calculadora::on_soma_clicked()
{
    float num1, num2;

    num1 = ui->input_1->text().toFloat(NULL);
    num2 = ui->input_2->text().toFloat(NULL);

    ui->result->setText(QString("%1").arg(num1+num2));

}

void Calculadora::on_subtracao_clicked()
{
    float num1, num2;

    num1 = ui->input_1->text().toFloat(NULL);
    num2 = ui->input_2->text().toFloat(NULL);

    ui->result->setText(QString("%1").arg(num1-num2));
}

void Calculadora::on_multiplicacao_clicked()
{
    float num1, num2;

    num1 = ui->input_1->text().toFloat(NULL);
    num2 = ui->input_2->text().toFloat(NULL);

    ui->result->setText(QString("%1").arg(num1*num2));
}

void Calculadora::on_divisao_clicked()
{
    float num1, num2;

    num1 = ui->input_1->text().toFloat(NULL);
    num2 = ui->input_2->text().toFloat(NULL);

    ui->result->setText(QString("%1").arg(num1/num2));
}
