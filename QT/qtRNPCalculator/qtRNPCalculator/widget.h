#ifndef WIDGET_H
#define WIDGET_H

#include "calculator.h"
#include "calculatorstack.h"

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    Calculator calculator;
    CalculatorStack calculatorStack;

    void printStack();

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btn_clear_clicked();

    void on_btn_one_clicked();

    void on_btn_two_clicked();

    void on_btn_three_clicked();

    void on_btn_sum_clicked();

    void on_btn_four_clicked();

    void on_btn_five_clicked();

    void on_btn_six_clicked();

    void on_btn_subtract_clicked();

    void on_btn_seven_clicked();

    void on_btn_eigth_clicked();

    void on_btn_nine_clicked();

    void on_btn_multiply_clicked();

    void on_btn_up_clicked();

    void on_btn_down_clicked();

    void on_btn_divide_clicked();

    void on_btn_delete_clicked();

    void on_btn_rol_clicked();

    void on_btn_zero_clicked();

    void on_btn_enter_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
