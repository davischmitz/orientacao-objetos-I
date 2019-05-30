#include <QCoreApplication>
#include "counter.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    counter a,b;

    QObject::connect(&a, SIGNAL(valueChanged(int)), &b, SLOT(setValue(int)));

    a.setValue(12);

    cout << "valor de a: " << a.getValue() << " valor de b:  " << b.getValue() << endl;

    b.setValue(48);

    cout << "valor de a: " << a.getValue() << " valor de b:  " << b.getValue() << endl;

    QObject::disconnect(&a, SIGNAL(valueChanged(int)), &b, SLOT(setValue(int)));

    a.setValue(15);

    cout << "valor de a: " << a.getValue() << " valor de b:  " << b.getValue() << endl;

    return app.exec();
}
