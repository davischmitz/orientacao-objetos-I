#include "widget.h"
#include "ui_widget.h"
#include "calculatorstack.h"
#include <QScrollBar>
#include <string.h>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::printStack() {
    ui->textEdit_stack->clear();
    QStack<float> stack = calculatorStack.getStack();

    for(int i=0; i<stack.count(); i++) {
        ui->textEdit_stack->append(QString("%1").arg(stack.at(i)));
    }
}

void Widget::on_btn_zero_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("0"));
}

void Widget::on_btn_one_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("1"));
}

void Widget::on_btn_two_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("2"));
}

void Widget::on_btn_three_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("3"));
}

void Widget::on_btn_four_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("4"));
}

void Widget::on_btn_five_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("5"));
}

void Widget::on_btn_six_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("6"));
}

void Widget::on_btn_seven_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("7"));
}

void Widget::on_btn_eigth_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("8"));
}

void Widget::on_btn_nine_clicked()
{
    ui->numbers_input->insert(QString("%1").arg("9"));
}

void Widget::on_btn_clear_clicked()
{
    ui->numbers_input->clear();
}

void Widget::on_btn_sum_clicked()
{
    if(!calculatorStack.validateStackSize()) return;
    float value1 = calculatorStack.pop();
    float value2 = calculatorStack.pop();
    calculatorStack.push(calculator.sum(value1, value2));
    printStack();
}

void Widget::on_btn_subtract_clicked()
{
    if(!calculatorStack.validateStackSize()) return;
    float value1 = calculatorStack.pop();
    float value2 = calculatorStack.pop();
    calculatorStack.push(calculator.subtract(value1, value2));
    printStack();
}

void Widget::on_btn_multiply_clicked()
{
    if(!calculatorStack.validateStackSize()) return;
    float value1 = calculatorStack.pop();
    float value2 = calculatorStack.pop();
    calculatorStack.push(calculator.multiply(value1, value2));
    printStack();
}

void Widget::on_btn_divide_clicked()
{
    if(!calculatorStack.validateStackSize()) return;
    float value1 = calculatorStack.pop();
    float value2 = calculatorStack.pop();
    calculatorStack.push(calculator.divide(value1, value2));
    printStack();
}

void Widget::on_btn_rol_clicked()
{
    if(!calculatorStack.validateStackSize()) return;
    calculatorStack.swapLastElements();
    printStack();
}

void Widget::on_btn_delete_clicked()
{
    if(calculatorStack.getStack().count() == 0) return;
    calculatorStack.pop();
    printStack();
}

void Widget::on_btn_up_clicked()
{
    int currentScrollValue = ui->textEdit_stack->verticalScrollBar()->value();
    ui->textEdit_stack->verticalScrollBar()->setValue(currentScrollValue - 10);
}

void Widget::on_btn_down_clicked()
{
    int currentScrollValue = ui->textEdit_stack->verticalScrollBar()->value();
    ui->textEdit_stack->verticalScrollBar()->setValue(currentScrollValue + 10);
}

void Widget::on_btn_enter_clicked()
{
   QString input = ui->numbers_input->text();
   ui->numbers_input->clear();
   this->calculatorStack.push(input.toFloat());
   printStack();
}
