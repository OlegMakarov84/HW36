#include <iostream>
#include <QApplication>
#include "mainwindow.h"
#include "Database.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createConnection();
    MainWindow w;
    w.show();
    return a.exec();
}
