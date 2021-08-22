#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Calculator windows;
    windows.show();

    return a.exec();
}
