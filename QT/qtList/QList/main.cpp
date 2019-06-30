#include <QCoreApplication>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> qList;
    int start = qList.indexOf(qList.begin());
    int end  = qList.length();

    return a.exec();
}
