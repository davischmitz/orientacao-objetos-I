#include "widget.h"
#include "ui_widget.h"
#include "ticket.h"

#include <QDebug>

using namespace std ;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    atendimentosPrioritarios = 0;
}

Widget::~Widget()
{
    delete ui;
}

int Widget::getQueueId(QQueue<Ticket> queue)
{
    if (!queue.isEmpty()) {
         Ticket lastTicket = queue.last();
         return lastTicket.getId() + 1;
    } else {
        return 1;
    }
}

void Widget::on_btn_normal_clicked()
{
    Ticket ticket;

    int id = this->getQueueId(normalQueue);
    ticket.setId(id);

    ticket.setPriority("Normal");

    ticket.setCreationDateTime(QDateTime::currentDateTime());
    normalQueue.enqueue(ticket);
}

void Widget::on_btn_prioritary_clicked()
{
    Ticket ticket;

    int id = this->getQueueId(prioritaryQueue);
    ticket.setId(id);

    ticket.setPriority("Prioritário");

    ticket.setCreationDateTime(QDateTime::currentDateTime());
    prioritaryQueue.enqueue(ticket);
}

void Widget::on_btn_atender_clicked()
{
    if(!prioritaryQueue.isEmpty() && atendimentosPrioritarios < 2) {
        Ticket ticket = prioritaryQueue.dequeue();

        ui->ticket_id->setText(QString("%1").arg(ticket.getId()));
        ui->ticket_priority->setText(QString::fromStdString(ticket.getPriority()));
        ui->ticket_time->setText(ticket.getCreationDateTime().toString("dd/MM/yyyy hh:mm:ss"));

        this->atendimentosPrioritarios++;
    } else {
        Ticket ticket = normalQueue.dequeue();

        ui->ticket_id->setText(QString("%1").arg(ticket.getId()));
        ui->ticket_priority->setText(QString::fromStdString(ticket.getPriority()));
        ui->ticket_time->setText(ticket.getCreationDateTime().toString("dd/MM/yyyy hh:mm:ss"));

        this->atendimentosPrioritarios = 0;
    }
}
