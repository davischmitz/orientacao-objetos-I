/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QPushButton *soma;
    QLineEdit *input_1;
    QLineEdit *input_2;
    QPushButton *subtracao;
    QPushButton *multiplicacao;
    QPushButton *divisao;
    QLineEdit *result;

    void setupUi(QWidget *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QStringLiteral("Calculadora"));
        Calculadora->resize(400, 300);
        soma = new QPushButton(Calculadora);
        soma->setObjectName(QStringLiteral("soma"));
        soma->setGeometry(QRect(60, 80, 41, 31));
        input_1 = new QLineEdit(Calculadora);
        input_1->setObjectName(QStringLiteral("input_1"));
        input_1->setGeometry(QRect(60, 40, 91, 31));
        input_2 = new QLineEdit(Calculadora);
        input_2->setObjectName(QStringLiteral("input_2"));
        input_2->setGeometry(QRect(160, 40, 91, 31));
        subtracao = new QPushButton(Calculadora);
        subtracao->setObjectName(QStringLiteral("subtracao"));
        subtracao->setGeometry(QRect(110, 80, 41, 31));
        multiplicacao = new QPushButton(Calculadora);
        multiplicacao->setObjectName(QStringLiteral("multiplicacao"));
        multiplicacao->setGeometry(QRect(160, 80, 41, 31));
        divisao = new QPushButton(Calculadora);
        divisao->setObjectName(QStringLiteral("divisao"));
        divisao->setGeometry(QRect(210, 80, 41, 31));
        result = new QLineEdit(Calculadora);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(260, 40, 91, 71));

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QWidget *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Calculadora", Q_NULLPTR));
        soma->setText(QApplication::translate("Calculadora", "+", Q_NULLPTR));
        subtracao->setText(QApplication::translate("Calculadora", "-", Q_NULLPTR));
        multiplicacao->setText(QApplication::translate("Calculadora", "*", Q_NULLPTR));
        divisao->setText(QApplication::translate("Calculadora", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
