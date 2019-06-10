#include "ticket.h"

Ticket::Ticket()
{
    this->id = 0;
}

Ticket::~Ticket()
{

}

void Ticket::setId(int id) {
    this->id = id;
}

int Ticket::getId(){
    return this->id;
}

void Ticket::setPriority(string priority) {
    this->priority = priority;
}

string Ticket::getPriority() {
    return this->priority;
}

void Ticket::setCreationDateTime(QDateTime creationDateTime) {
    this->creationDateTime = creationDateTime;
}

QDateTime Ticket::getCreationDateTime() {
    return this->creationDateTime;
}

