/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *numbers_input;
    QTextEdit *textEdit_stack;
    QPushButton *btn_clear;
    QPushButton *btn_one;
    QPushButton *btn_two;
    QPushButton *btn_three;
    QPushButton *btn_sum;
    QPushButton *btn_six;
    QPushButton *btn_four;
    QPushButton *btn_five;
    QPushButton *btn_subtract;
    QPushButton *btn_seven;
    QPushButton *btn_eigth;
    QPushButton *btn_nine;
    QPushButton *btn_multiply;
    QPushButton *btn_up;
    QPushButton *btn_zero;
    QPushButton *btn_down;
    QPushButton *btn_divide;
    QPushButton *btn_delete;
    QPushButton *btn_rol;
    QPushButton *btn_enter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(292, 410);
        numbers_input = new QLineEdit(Widget);
        numbers_input->setObjectName(QStringLiteral("numbers_input"));
        numbers_input->setGeometry(QRect(10, 110, 201, 41));
        textEdit_stack = new QTextEdit(Widget);
        textEdit_stack->setObjectName(QStringLiteral("textEdit_stack"));
        textEdit_stack->setGeometry(QRect(10, 10, 271, 91));
        btn_clear = new QPushButton(Widget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(220, 110, 61, 41));
        btn_one = new QPushButton(Widget);
        btn_one->setObjectName(QStringLiteral("btn_one"));
        btn_one->setGeometry(QRect(10, 160, 61, 41));
        btn_two = new QPushButton(Widget);
        btn_two->setObjectName(QStringLiteral("btn_two"));
        btn_two->setGeometry(QRect(80, 160, 61, 41));
        btn_three = new QPushButton(Widget);
        btn_three->setObjectName(QStringLiteral("btn_three"));
        btn_three->setGeometry(QRect(150, 160, 61, 41));
        btn_sum = new QPushButton(Widget);
        btn_sum->setObjectName(QStringLiteral("btn_sum"));
        btn_sum->setGeometry(QRect(220, 160, 61, 41));
        btn_six = new QPushButton(Widget);
        btn_six->setObjectName(QStringLiteral("btn_six"));
        btn_six->setGeometry(QRect(150, 210, 61, 41));
        btn_four = new QPushButton(Widget);
        btn_four->setObjectName(QStringLiteral("btn_four"));
        btn_four->setGeometry(QRect(10, 210, 61, 41));
        btn_five = new QPushButton(Widget);
        btn_five->setObjectName(QStringLiteral("btn_five"));
        btn_five->setGeometry(QRect(80, 210, 61, 41));
        btn_subtract = new QPushButton(Widget);
        btn_subtract->setObjectName(QStringLiteral("btn_subtract"));
        btn_subtract->setGeometry(QRect(220, 210, 61, 41));
        btn_seven = new QPushButton(Widget);
        btn_seven->setObjectName(QStringLiteral("btn_seven"));
        btn_seven->setGeometry(QRect(10, 260, 61, 41));
        btn_eigth = new QPushButton(Widget);
        btn_eigth->setObjectName(QStringLiteral("btn_eigth"));
        btn_eigth->setGeometry(QRect(80, 260, 61, 41));
        btn_nine = new QPushButton(Widget);
        btn_nine->setObjectName(QStringLiteral("btn_nine"));
        btn_nine->setGeometry(QRect(150, 260, 61, 41));
        btn_multiply = new QPushButton(Widget);
        btn_multiply->setObjectName(QStringLiteral("btn_multiply"));
        btn_multiply->setGeometry(QRect(220, 260, 61, 41));
        btn_up = new QPushButton(Widget);
        btn_up->setObjectName(QStringLiteral("btn_up"));
        btn_up->setGeometry(QRect(10, 310, 61, 41));
        btn_zero = new QPushButton(Widget);
        btn_zero->setObjectName(QStringLiteral("btn_zero"));
        btn_zero->setGeometry(QRect(80, 310, 61, 41));
        btn_down = new QPushButton(Widget);
        btn_down->setObjectName(QStringLiteral("btn_down"));
        btn_down->setGeometry(QRect(150, 310, 61, 41));
        btn_divide = new QPushButton(Widget);
        btn_divide->setObjectName(QStringLiteral("btn_divide"));
        btn_divide->setGeometry(QRect(220, 310, 61, 41));
        btn_delete = new QPushButton(Widget);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setGeometry(QRect(10, 360, 61, 41));
        btn_rol = new QPushButton(Widget);
        btn_rol->setObjectName(QStringLiteral("btn_rol"));
        btn_rol->setGeometry(QRect(80, 360, 61, 41));
        btn_enter = new QPushButton(Widget);
        btn_enter->setObjectName(QStringLiteral("btn_enter"));
        btn_enter->setGeometry(QRect(150, 360, 131, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("Widget", "Clear", Q_NULLPTR));
        btn_one->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        btn_two->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        btn_three->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        btn_sum->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        btn_six->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        btn_four->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        btn_five->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        btn_subtract->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        btn_seven->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        btn_eigth->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        btn_nine->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        btn_multiply->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        btn_up->setText(QApplication::translate("Widget", "^", Q_NULLPTR));
        btn_zero->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        btn_down->setText(QApplication::translate("Widget", "~", Q_NULLPTR));
        btn_divide->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("Widget", "Del", Q_NULLPTR));
        btn_rol->setText(QApplication::translate("Widget", "Rol", Q_NULLPTR));
        btn_enter->setText(QApplication::translate("Widget", "Enter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
