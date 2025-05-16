#include "mainwindow.h"
#include "chatcardcontainer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ChatCardContainer c;
    c.show();
    return a.exec();
}
