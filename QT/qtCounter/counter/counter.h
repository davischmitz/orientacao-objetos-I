#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <iostream>

using namespace std;

class counter : public QObject
{
    Q_OBJECT

private:
    int m_value;

public:
    counter() { m_value  = 0; }
    int getValue() const { return m_value; }

signals:
    void valueChanged(int newValue);

public slots:
    void setValue(int value);

};

#endif // COUNTER_H
