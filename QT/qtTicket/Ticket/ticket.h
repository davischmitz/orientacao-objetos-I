#ifndef TICKET_H
#define TICKET_H

#include <QDateTime>
#include <string>

using namespace std;

class Ticket
{

private:
    int id;
    string priority;
    QDateTime creationDateTime;

public:
    Ticket();
    ~Ticket();

    void setId(int);
    int getId();

    void setPriority(string);
    string getPriority();

    void setCreationDateTime(QDateTime creationDateTime);
    QDateTime getCreationDateTime();

};

#endif // TICKET_H
