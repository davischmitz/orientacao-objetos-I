#ifndef WIDGET_H
#define WIDGET_H

#include "ticket.h"

#include <QQueue>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    int atendimentosPrioritarios;
    QQueue<Ticket> normalQueue;
    QQueue<Ticket> prioritaryQueue;

    int getQueueId(QQueue<Ticket>);

private slots:
    void on_btn_normal_clicked();

    void on_btn_prioritary_clicked();

    void on_btn_atender_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
